/*******************************************************************************
The content of this file includes portions of the AUDIOKINETIC Wwise Technology
released in source code form as part of the SDK installer package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use this file in accordance with the end user license agreement provided 
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Apache License Usage

Alternatively, this file may be used under the Apache License, Version 2.0 (the 
"Apache License"); you may not use this file except in compliance with the 
Apache License. You may obtain a copy of the Apache License at 
http://www.apache.org/licenses/LICENSE-2.0.

Unless required by applicable law or agreed to in writing, software distributed
under the Apache License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
OR CONDITIONS OF ANY KIND, either express or implied. See the Apache License for
the specific language governing permissions and limitations under the License.

  Version: v2017.2.10  Build: 6745
  Copyright (c) 2006-2019 Audiokinetic Inc.
*******************************************************************************/

/// \file 
/// Audiokinetic's implementation-specific definitions and factory of 
/// overridable Stream Manager module.
/// Contains the default Stream Manager's implementation-specific interfaces that altogether constitute
/// the Low-Level I/O submodule. This submodule needs to be implemented by the game. All I/O requests 
/// generated by the Stream Manager end up to one of the I/O hooks defined herein.
/// Read \ref streamingmanager_lowlevel to learn more about the Low-Level I/O.

#ifndef _AK_STREAM_MGR_MODULE_H_
#define _AK_STREAM_MGR_MODULE_H_

#include <AK/SoundEngine/Common/IAkStreamMgr.h>
#include <AK/Tools/Common/AkPlatformFuncs.h>

/// \name Audiokinetic Stream Manager's implementation-specific definitions.
//@{
/// Stream Manager initialization settings.
/// \sa 
/// - AK::IAkStreamMgr
/// - AK::StreamMgr::Create()
/// - \ref streamingmanager_settings

struct AkStreamMgrSettings
{
    AkUInt32			uMemorySize;        ///< Size of memory pool for small objects of Stream Manager.
											///< Small objects are the Stream Manager instance, devices, 
											///< stream objects, user stream names, pending transfers, 
											///< buffer records, pending open commands, and so on.
											///< Ideally, this pool should never run out of memory, 
											///< because it may cause undesired I/O transfer 
											///< cancellation, and even major CPU spikes. I/O memory should 
											///< be bound by the size of each device's I/O pool instead.
};

/// High-level IO devices initialization settings.
/// \sa 
/// - AK::IAkStreamMgr
/// - AK::StreamMgr::CreateDevice()
/// - \ref streamingmanager_settings
struct AkDeviceSettings
{
	void *				pIOMemory;					///< Pointer for I/O memory allocated by user. This is fed directly to AK::MemoryMgr::CreatePool().
													///< Pass NULL if you want memory to be allocated by the MemoryMgr via AK alloc hooks. 
													///< If specified, uIOMemorySize, uIOMemoryAlignment and ePoolAttributes are ignored.
	AkUInt32			uIOMemorySize;				///< Size of memory pool for I/O (for automatic streams). It is passed directly to AK::MemoryMgr::CreatePool(), after having been rounded down to a multiple of uGranularity.
	AkUInt32			uIOMemoryAlignment;			///< I/O memory pool alignment. It is passed directly to AK::MemoryMgr::CreatePool().
	AkMemPoolAttributes ePoolAttributes;			///< Attributes for internal I/O memory pool. Note that these pools are always allocated internally as AkFixedSizeBlocksMode-style pools. Here, specify the block allocation type (AkMalloc, and so on). It is passed directly to AK::MemoryMgr::CreatePool().
	AkUInt32			uGranularity;				///< I/O requests granularity (typical bytes/request).
	AkUInt32			uSchedulerTypeFlags;		///< Scheduler type flags.
    AkThreadProperties	threadProperties;			///< Scheduler thread properties.
	AkReal32			fTargetAutoStmBufferLength;	///< Targetted automatic stream buffer length (ms). When a stream reaches that buffering, it stops being scheduled for I/O except if the scheduler is idle.
	AkUInt32			uMaxConcurrentIO;			///< Maximum number of transfers that can be sent simultaneously to the Low-Level I/O (applies to AK_SCHEDULER_DEFERRED_LINED_UP device only).
	bool				bUseStreamCache;			///< If true the device attempts to reuse IO buffers that have already been streamed from disk. This is particularly useful when streaming small looping sounds. The drawback is a small CPU hit when allocating memory, and a slightly larger memory footprint in the StreamManager pool. 													
	AkUInt32			uMaxCachePinnedBytes;		///< Maximum number of bytes that can be "pinned" using AK::SoundEngine::PinEventInStreamCache() or AK::IAkStreamMgr::PinFileInCache()
};

/// \name Scheduler type flags.

/// Requests to Low-Level IO are synchronous. The streaming device expects a blocking I/O hook at creation time (IAkIOHookBlocking interface, see CreateDevice()). 
/// Functions of this interface should return only when the transfer is complete.
#define AK_SCHEDULER_BLOCKING          (0x01)
/// Requests to Low-Level IO are asynchronous, but posted one after the other, starting with streams that need data the most. 
/// The streaming device expects a deferred I/O hook at creation time (IAkIOHookDeferred interface, see CreateDevice()). 
/// Up to AkDeviceSettings::uMaxConcurrentIO requests can be sent to the Low-Level I/O at the same time.
#define AK_SCHEDULER_DEFERRED_LINED_UP (0x02)

/// File descriptor. File identification for the low-level I/O.
/// \sa
/// - AK::StreamMgr::IAkLowLevelIOHook
struct AkFileDesc
{
    AkInt64				iFileSize;			///< File size in bytes
    AkUInt32			uSector;			///< Start sector (the sector size is specified by the low-level I/O)
											///< \sa
											///< - AK::StreamMgr::IAkFileLocationResolver::Open()
											///< - AK::StreamMgr::IAkLowLevelIOHook::GetBlockSize()
    AkUInt32			uCustomParamSize;	///< Size of the custom parameter
    void *				pCustomParam;		///< Custom parameter
    AkFileHandle		hFile;              ///< File handle/identifier
    AkDeviceID			deviceID;			///< Device ID, obtained from CreateDevice() \sa AK::IAkStreamMgr::CreateDevice()
};

/// Structure for synchronous transfers handshaking with the Low-Level I/O. Used with blocking I/O hooks.
/// \sa AK::StreamMgr::IAkIOHookBlocking
struct AkIOTransferInfo
{
	AkUInt64		uFilePosition;		///< File offset where transfer should begin.
    AkUInt32		uBufferSize;		///< Size of the buffer in which the I/O hook can write to.
	AkUInt32		uRequestedSize;		///< Exact number of requested bytes for this transfer. Always equal to or smaller than uBufferSize.
};

struct AkAsyncIOTransferInfo;
/// Callback function prototype definition used for asynchronous I/O transfers between the Stream Manager
/// and the Low-Level IO. Used with deferred I/O hooks.
/// Notes:
/// - If you return AK_Fail, all streams awaiting for this transfer are marked as invalid and will stop. An "IO error" notification is posted to the capture log.
/// - If the transfer was cancelled by the Stream Manager while it was in the Low-Level IO, you must return AK_Success, whether
/// you performed the operation or not. The Stream Manager knows that it was cancelled, so it will not try to use it after you call it back.
/// \sa 
/// - AkAsyncIOTransferInfo
/// - AK::StreamMgr::IAkIOHookDeferred
AK_CALLBACK( void, AkIOCallback )( 
	AkAsyncIOTransferInfo * in_pTransferInfo,	///< Pointer to the AkAsyncIOTransferInfo structure that was passed to corresponding Read() or Write() call.
	AKRESULT		in_eResult			///< Result of transfer: AK_Success or AK_Fail (streams waiting for this transfer become invalid).
	);

/// Structure for asynchronous transfers handshaking with the Low-Level I/O. Extends AkIOTransferInfo.
/// \sa 
/// - AK::StreamMgr::IAkIOHookDeferred
/// - AkIOTransferInfo
/// - AkAIOCallback
struct AkAsyncIOTransferInfo : public AkIOTransferInfo
{
	void *			pBuffer;			///< Buffer for data transfer.
	AkIOCallback	pCallback;			///< Callback function used to notify the high-level device when the transfer is complete.
	void *			pCookie;			///< Reserved. The I/O device uses this cookie to retrieve the owner of the transfer.
	void *			pUserData;			///< Custom user data.
};

/// Low-Level I/O requests heuristics.
/// Used for asynchronous read requests. 
/// \sa 
/// - AK::StreamMgr::IAkIOHookBlocking::Read()
/// - AK::StreamMgr::IAkIOHookBlocking::Write()
/// - AK::StreamMgr::IAkIOHookDeferred::Read()
/// - AK::StreamMgr::IAkIOHookDeferred::Write()
struct AkIoHeuristics
{
	AkReal32		fDeadline;			///< Operation deadline (ms). 
	AkPriority		priority;			///< Operation priority (at the time it was scheduled and sent to the Low-Level I/O). Range is [AK_MIN_PRIORITY,AK_MAX_PRIORITY], inclusively.
};



//@}

namespace AK
{
	// Audiokinetic Stream Manager's implementation-specific interfaces of the Low-Level IO submodule.
	namespace StreamMgr
	{
		/// Base interface for Low-Level I/O hooks. Defines common methods across both types of hooks.
		class IAkLowLevelIOHook
		{
		protected:
			/// Virtual destructor on interface to avoid warnings.
			virtual ~IAkLowLevelIOHook(){}

		public:
			/// Cleans up a file.
			/// \return AK_Success if the file was properly cleaned-up.
			virtual AKRESULT Close(
				AkFileDesc &			in_fileDesc			///< File descriptor.
				) = 0;

			/// Returns the block size for the file or its storage device. 
			/// The block size is a constraint for clients
			/// of the Stream Manager: All reads, writes and position changes need to be a multiple of
			/// that size.
			/// \return 
			/// The block size for a specific file or storage device.
			/// \remarks 
			/// - Some files might be opened with flags that require I/O transfers to be a multiple 
			/// of this size. The stream manager will query this function to resolve calls 
			/// to IAk(Auto)Stream::GetBlockSize( ).
			/// - Also, AkFileDesc::uSector specifies a number of sectors in multiples of this value.
			/// - Files/IO devices that do not require byte alignment should return 1.
			///	- Whether file opening was deferred or not, GetBlockSize() is always called right 
			/// after the first call to Open(), in the client's thread, and is never called again.
			/// \warning 
			/// Returning 0 is not allowed and will likely make the Stream Manager crash.
			/// \sa 
			///	- AK::StreamMgr::IAkFileLocationResolver::Open()
			/// - AK::StreamMgr::IAkIOHookBlocking::Read()
			/// - AK::StreamMgr::IAkIOHookBlocking::Write()
			/// - AK::StreamMgr::IAkIOHookDeferred::Read()
			/// - AK::StreamMgr::IAkIOHookDeferred::Write()
			virtual AkUInt32 GetBlockSize(
				AkFileDesc &			in_fileDesc			///< File descriptor.
				) = 0;

			/// Returns a description for the streaming device above this low-level hook.
			/// \remarks For profiling purposes only. The Release configuration of the 
			/// Stream Manager never calls it.
			virtual void GetDeviceDesc(
				AkDeviceDesc &			out_deviceDesc      ///< Device description.
				) = 0;

			/// Returns custom profiling data for the streaming device above this low-level hook.
			/// As opposed to GetDeviceDesc(), this is called at every monitoring frame.
			/// You may implement this function in order to display any value you find useful 
			/// in the "Streaming Devices" tab of the Wwise profiler ("Custom Param" column).
			/// \remarks For profiling purposes only. The Release configuration of the 
			/// Stream Manager never calls it.
			/// \return A 32-bit unsigned value to display in the Wwise profiler.
			virtual AkUInt32 GetDeviceData() = 0;
		};

		/// Interface for blocking low-level I/O transfers. Used by streaming devices created with the
		/// AK_SCHEDULER_BLOCKING flag.
		/// This is the simplest I/O hook. Calls to Read()/Write() must block until they are completed.
		/// The streaming device's I/O thread sends one transfer at a time.
		class IAkIOHookBlocking : public IAkLowLevelIOHook
		{
		protected:
			/// Virtual destructor on interface to avoid warnings.
			virtual ~IAkIOHookBlocking(){}

		public:

			/// Reads data from a file (synchronous). 
			/// Read data from the file described by in_fileDesc, in address out_pBuffer and with size and position 
			/// passed within io_transferInfo. When transfer is complete, return with the proper return code.
			/// \remarks 
			/// File position passed in io_transferInfo takes the offset of this file relative 
			/// to AkFileDesc::hFile (described with AkFileDesc::uSector). It is computed by the high-level 
			/// device as "in_fileDesc.uSector * Block_Size + Stream_Position", where Block_Size is obtained 
			/// via AK::StreamMgr::IAkLowLevelIOHook::GetBlockSize(). 
			/// \return 
			///     - AK_Success:	transfer was successful and out_pBuffer is filled with data.
			///     - AK_Fail:		an error occured.
			virtual AKRESULT Read(
				AkFileDesc &			in_fileDesc,        ///< File descriptor.
				const AkIoHeuristics &	in_heuristics,		///< Heuristics for this data transfer.
				void *					out_pBuffer,        ///< Buffer to be filled with data.
				AkIOTransferInfo &		in_transferInfo		///< Synchronous data transfer info. 
				) = 0;

			/// Writes data to a file (synchronous). 
			/// Write data to the file described by in_fileDesc, from address in_pData and with size and position 
			/// passed within io_transferInfo. When transfer is complete, return with the proper return code.
			/// \remarks File position passed in io_transferInfo takes the offset of this file relative 
			/// to AkFileDesc::hFile (described with AkFileDesc::uSector). It is computed by the high-level 
			/// device as "in_fileDesc.uSector * Block_Size + Stream_Position", where Block_Size is obtained 
			/// via AK::StreamMgr::IAkLowLevelIOHook::GetBlockSize(). 
			/// \return 
			///     - AK_Success:   transfer was successful.
			///     - AK_Fail:      an error occured.
			virtual AKRESULT Write(
				AkFileDesc &			in_fileDesc,        ///< File descriptor.
				const AkIoHeuristics &	in_heuristics,		///< Heuristics for this data transfer.
				void *					in_pData,           ///< Data to be written.
				AkIOTransferInfo &		io_transferInfo		///< Synchronous data transfer info. 
				) = 0;
		};

		/// Interface for deferred low-level I/O transfers. Used by streaming devices created with the
		/// AK_SCHEDULER_DEFERRED_LINED_UP flag.
		/// This I/O transfer handshaking method is preferred when you want to hook I/O to your own
		/// I/O streaming technology. You will receive up to AkDeviceSettings::uMaxConcurrentIO requests
		/// at the same time. You may queue them into your own system, and even use the heuristics passed
		/// down to this level for your convenience. 
		/// Note that the requests are always sent in the order that the Stream Manager considers to be
		/// the most appropriate. You may receive less than AkDeviceSettings::uMaxConcurrentIO at any
		/// given time. The number of concurrent transfers depends on the number of streams running in 
		/// the high-level streaming device, and on its target buffering length and granularity.
		/// Your advantage at this level is to be aware of file placement, so you may try to re-order 
		/// requests in order to minimize seeking on disk. 
		/// Calls to Read()/Write() should return as soon as possible. You need to call 
		/// AkAsyncIOTransferInfo::pCallback as soon as a transfer is completed.
		/// Cancel() is provided in order to inform you that the streaming device will flush this transfer
		/// upon completion. You may implement it or not. In all cases, you must call the callback.
		class IAkIOHookDeferred : public IAkLowLevelIOHook
		{
		protected:
			/// Virtual destructor on interface to avoid warnings.
			virtual ~IAkIOHookDeferred(){}

		public:

			/// Reads data from a file (asynchronous).
			/// \remarks 
			/// - Queue up your read request with address, size and file position specified in io_transferInfo.
			/// - When transfer is complete (whether it was successful, cancelled or failed), call 
			/// AkAsyncIOTransferInfo::pCallback. However, if you return AK_Fail() from Read(), do not call
			/// AkAsyncIOTransferInfo::pCallback.
			/// - AkAsyncIOTransferInfo::pCookie must be passed to the callback function as-is. It must not
			/// be changed by the Low-Level I/O.
			/// - The reference to io_transferInfo will be valid until the high-level device is notified 
			/// through the callback.
			/// - File position passed in io_transferInfo takes the offset of this file relative 
			/// to AkFileDesc::hFile (described with AkFileDesc::uSector). It is computed by the high-level 
			/// device as "in_fileDesc.uSector * Block_Size + Stream_Position", where Block_Size is obtained 
			/// via AK::StreamMgr::IAkLowLevelIOHook::GetBlockSize(). 
			/// \return 
			///     - AK_Success:	 An I/O request was successfully processed and is pending: 
			///							AkAsyncIOTransferInfo::pCallback must be called when it completes.
			///     - AK_Fail:        an error occured.
			virtual AKRESULT Read(
				AkFileDesc &			in_fileDesc,        ///< File descriptor.
				const AkIoHeuristics &	in_heuristics,		///< Heuristics for this data transfer.
				AkAsyncIOTransferInfo & io_transferInfo		///< Asynchronous data transfer info.
				) = 0;

			/// Writes data to a file (asynchronous).
			/// \remarks 
			/// - Queue up your write request with address, size and file position specified in io_transferInfo.
			/// - When transfer is complete (whether it was successful, cancelled or failed), call 
			/// AkAsyncIOTransferInfo::pCallback. However, if you return AK_Fail() from Write(), do not call
			/// AkAsyncIOTransferInfo::pCallback.
			/// - AkAsyncIOTransferInfo::pCookie must be passed to the callback function as-is. It must not
			/// be changed by the Low-Level I/O.
			/// - The reference to io_transferInfo will be valid until the high-level device is notified 
			/// through the callback.
			/// - File position passed in io_transferInfo takes the offset of this file relative 
			/// to AkFileDesc::hFile (described with AkFileDesc::uSector). It is computed by the high-level 
			/// device as "in_fileDesc.uSector * Block_Size + Stream_Position", where Block_Size is obtained 
			/// via AK::StreamMgr::IAkLowLevelIOHook::GetBlockSize(). 
			/// \return 
			///     - AK_Success:	 An I/O request was successfully processed and is pending: 
			///							AkAsyncIOTransferInfo::pCallback must be called when it completes.
			///     - AK_Fail:        an error occured.
			virtual AKRESULT Write(
				AkFileDesc &			in_fileDesc,        ///< File descriptor.
				const AkIoHeuristics &	in_heuristics,		///< Heuristics for this data transfer.
				AkAsyncIOTransferInfo & io_transferInfo		///< Platform-specific asynchronous IO operation info.
				) = 0;

			/// Notifies that a transfer request is cancelled. It will be flushed by the streaming device when completed.
			/// Cancellation is normal and happens regularly; for example, whenever a sound stops before the end
			/// or stops looping. It happens even more frequently when buffering (AkDeviceSettings::fTargetAutoStmBufferLength 
			/// and AkDeviceSettings::uGranularity) is large and when you low-level IO hook accepts many concurrent requests
			/// at the same time.
			/// \remarks
			/// - Cancel() simply informs the Low-Level I/O that a specific transfer will be flushed upon reception. 
			///	The Low-Level I/O may use this information to stop this transfer right away, or not (it is internally tagged
			///	by the high-level device as cancelled). Nevertheless, the callback function MUST be called for cancelled 
			///	transfers to be resolved.
			/// - When calling the callback function of a cancelled transfer, pass it *AK_Success*. Passing AK_Fail 
			/// to AkAsyncIOTransfer::pCallback has the effect of killing the stream once and for all. This is not
			/// what you want.
			/// - If io_bCancelAllTransfersForThisFile is set, you may cancel all transfers for this file at once.
			///	Leave io_bCancelAllTransfersForThisFile to true if you don't want to be called again. For example, if
			/// you don't do anything special in Cancel(), leave it to true. This will reduce the amount of useless calls.
			/// If you set it to false, Cancel() will be called again for each remaining pending transfer that need to be cancelled. 
			/// - If io_bCancelAllTransfersForThisFile is not set, Cancel() is only called for a subset of pending 
			///	transfers for this file. You must not set it to true, as Cancel() needs to be called explicitly for each transfer that should be cancelled.
			/// \warning
			/// - The calling thread holds the stream's lock. You may call the callback function directly from here
			/// (if you can guarantee that the I/O buffer will not be accessed in the meantime), but you must not wait here 
			/// for another thread to call the callback function.
			/// - Likewise, if you resolve transfers with your own thread and use a lock to protect your transfers queue, 
			/// be careful not to run into a deadlock. Cancel() can be executed by any thread. Thus, if you need to lock your queue 
			/// in Cancel(), you must never hold this lock when calling back transfers, either from within Cancel() or from your 
			/// worker thread's routine. Lock your list, dequeue the transfer if you can, unlock, and call pCallback if and only if 
			/// the transfer was found and dequeued. On the other hand, if you choose not to do anything in Cancel(), the lock only protects 
			/// your list between Read()/Write() and your worker thread's routine, and since the device I/O thread does not hold the 
			/// stream's lock while calling Read()/Write(), your worker thread may therefore hold it while calling back transfers.
			/// - A race condition exists when cancelling all transfers (io_bCancelAllTransfersForThisFile is true) directly from within this hook. 
			/// If you handle the io_bCancelAllTransfersForThisFile == true case, you need to defer calling the completion callback to later 
			/// (from your usual I/O completion thread, for example). This will be fixed in a future version of Wwise.
			virtual void Cancel(
				AkFileDesc &		in_fileDesc,			///< File descriptor.
				AkAsyncIOTransferInfo & io_transferInfo,	///< Transfer info to cancel.
				bool & io_bCancelAllTransfersForThisFile	///< Flag indicating whether all transfers should be cancelled for this file (see notes in function description).
				) = 0;
		};

		/// File location resolver interface. There is one and only one File Location Resolver that is
		/// registered to the Stream Manager (using AK::StreamMgr::SetFileLocationResolver()). Its purpose
		/// is to map a file name or ID to 
		/// 1) a streaming device / I/O hook;
		/// 2) a valid file descriptor (AkFileDesc) usable by the I/O hook.
		/// When your Low-Level I/O submodule uses a single device, you should create a standalone I/O
		/// hook which implements one of the I/O hooks defined above (blocking or deferred), as well 
		/// as the File Location Resolver. You then register this object to the Stream Manager as the 
		/// File Location Resolver.
		/// If you wish to create multiple devices, then you should have a separate object that implements
		/// AK::StreamMgr::IAkFileLocationResolver and registers to the Stream Manager as such. This object
		/// will be used to dispatch the file open request to the appropriate device. The strategy you will 
		/// use to select the correct device is up to you to implement. You may also implement a set of
		/// hooks that delegate opening to the next device when they can't find the file requested 
		/// (like a chain of responsiblity pattern), although this will likely be less efficient.
		class IAkFileLocationResolver
		{
		protected:
			/// Virtual destructor on interface to avoid warnings.
			virtual ~IAkFileLocationResolver(){}

		public:

			/// Returns a file descriptor for a given file name (string).
			/// Performs the operations needed to make the file descriptor usable by
			/// the other methods of the interface (for e.g. ask the OS for a valid file handle).
			/// \return 
			///     - AK_Success:       A valid file descriptor is returned
			///     - AK_FileNotFound:  File was not found.
			///     - AK_Fail:          File could not be open for any other reason.
			/// \return 
			///		- A file descriptor, which contains 
			///         - an unique identifier to be used with functions of the low-level IO 
			///           interface.
			///         - the total stream size in bytes.
			///         - the offset from the beginning of the file (in blocks).
			///         - a device ID, that was obtained through AK::StreamMgr::CreateDevice().
			///		- The updated io_bSyncOpen flag depending on the File Resolver's deferred opening policy.
			/// \remarks
			///		- The file descriptor is unique for each stream, and its address remains the same 
			///		throughout its lifetime. In other words, the value of &in_fileDesc inside Read() or
			///		Close() is the same as &out_fileDesc in Open().
			///		- Open() is always called first in the client thread.
			///		- If io_bSyncOpen is true, file opening must be executed now. If it is false,
			///		the File Location Resolver may choose whether it wants open it now, or later
			///		from the streaming device's thread. If it wishes to open it now, then it must
			///		set io_bSyncOpen to true. Otherwise, it needs to do the following: leave 
			///		io_bSyncOpen to false, clear out_fileDesc::iFileSize and out_fileDesc::uSector, 
			///		and set out_fileDesc::deviceID to the streaming device's ID that will handle 
			///		this file. By returning io_bSyncOpen as false, the Stream Manager will interpret
			///		this as a request for deferred file opening, and this function will called again
			///		from the streaming device's thread (this time, with this io_bSyncOpen set to true).
			///		- All members of out_fileDesc will be cleared upon first call to Open().
			/// \warning
			///		- It is illegal to return io_bSyncOpen as false if Open() was called with io_bSyncOpen
			///		set to true.
			///		- Deferred file opening requires allocations in the Stream Manager's small object pool.
			///		The File Location Resolver should always choose to open files synchronously if it is 
			///		fast to do so.
			///		- Whether opening is deferred or not, GetBlockSize() is always called right after the
			///		first call to Open(), in the client's thread, and is never called again.
			/// \sa 
			///	- GetBlockSize()
			/// - \ref streamingmanager_lowlevel_location
			virtual AKRESULT Open( 
				const AkOSChar*			in_pszFileName,		///< File name.
				AkOpenMode				in_eOpenMode,		///< Open mode.
				AkFileSystemFlags *		in_pFlags,			///< Special flags. Can pass NULL.
				bool &					io_bSyncOpen,		///< If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
				AkFileDesc &			io_fileDesc         ///< Returned file descriptor.
				) = 0;

			/// Returns a file descriptor for a given file ID.
			/// Performs the operations needed to make the file descriptor usable by
			/// the other methods of the interface (for e.g. ask the OS for a valid file handle).
			/// \return 
			///     - AK_Success:       A valid file descriptor is returned
			///     - AK_FileNotFound:  File was not found.
			///     - AK_Fail:          File could not be open for any other reason.
			/// \return 
			///		- A file descriptor, which contains 
			///         - an unique identifier to be used with functions of the low-level IO 
			///           interface.
			///         - the total stream size in bytes.
			///         - the offset of the beginning of the file (in blocks). 
			///         - a device ID, that was obtained through AK::StreamMgr::CreateDevice().
			///		- A file descriptor, that contains 
			///         - an unique identifier to be used with functions of the low-level IO 
			///           interface.
			///         - the total stream size in bytes.
			///         - the offset from the beginning of the file (in blocks).
			///         - a device ID, that was obtained through AK::StreamMgr::CreateDevice().
			///		- The updated io_bSyncOpen flag depending on the File Resolver's deferred opening policy.
			/// \remarks
			///		- Open() is always called first in the client thread.
			///		- If io_bSyncOpen is true, file opening must be executed now. If it is false,
			///		the File Location Resolver may choose whether it wants open it now, or later
			///		from the streaming device's thread. If it wishes to open it now, then it must
			///		set io_bSyncOpen to true. Otherwise, it needs to do the following: leave 
			///		io_bSyncOpen to false, clear out_fileDesc::iFileSize and out_fileDesc::uSector, 
			///		and set out_fileDesc::deviceID to the streaming device's ID that will handle 
			///		this file. By returning io_bSyncOpen as false, the Stream Manager will interpret
			///		this as a request for deferred file opening, and this function will called again
			///		from the streaming device's thread (this time, with this io_bSyncOpen set to true).
			///		- All members of out_fileDesc will be cleared upon first call to Open().
			/// \warning
			///		- It is illegal to return io_bSyncOpen as false if Open() was called with io_bSyncOpen
			///		set to true.
			///		- Deferred file opening requires allocations in the Stream Manager's small object pool.
			///		The File Location Resolver should always choose to open files synchronously if it is 
			///		fast to do so.
			///		- Whether opening is deferred or not, GetBlockSize() is always called right after the
			///		first call to Open(), in the client's thread, and is never called again.
			///	- GetBlockSize()
			/// - \ref streamingmanager_lowlevel_location
			virtual AKRESULT Open( 
				AkFileID				in_fileID,          ///< File ID.
				AkOpenMode				in_eOpenMode,       ///< Open mode.
				AkFileSystemFlags *		in_pFlags,			///< Special flags. Can pass NULL.
				bool &					io_bSyncOpen,		///< If true, the file must be opened synchronously. Otherwise it is left at the File Location Resolver's discretion. Return false if Open needs to be deferred.
				AkFileDesc &			io_fileDesc         ///< Returned file descriptor.
				) = 0;
		};

		/// \name Audiokinetic implementation-specific Stream Manager factory.
		//@{
		/// Stream Manager factory.
		/// \remarks 
		/// - In order for the Stream Manager to work properly, you also need to create 
		/// at least one streaming device (and implement its I/O hook), and register the 
		/// File Location Resolver with AK::StreamMgr::SetFileLocationResolver().
		/// - Use AK::StreamMgr::GetDefaultSettings(), then modify the settings you want,
		/// then feed this function with them.
		/// \sa 
		/// - AK::IAkStreamMgr
		/// - AK::StreamMgr::SetFileLocationResolver()
		/// - AK::StreamMgr::GetDefaultSettings()
		AK_EXTERNAPIFUNC( IAkStreamMgr *, Create )( 
			const AkStreamMgrSettings &	in_settings		///< Stream manager initialization settings.
			);

		/// Get the default values for the Stream Manager's settings.
		/// \sa 
		/// - AK::StreamMgr::Create()
		/// - AkStreamMgrSettings
		/// - \ref streamingmanager_settings
		AK_EXTERNAPIFUNC( void, GetDefaultSettings )(
			AkStreamMgrSettings &		out_settings	///< Returned AkStreamMgrSettings structure with default values.
			);

		/// Get the one and only File Location Resolver registered to the Stream Manager.
		/// \sa
		/// - AK::StreamMgr::IAkFileLocationResolver
		/// - AK::StreamMgr::SetFileLocationResolver()
		AK_EXTERNAPIFUNC( IAkFileLocationResolver *, GetFileLocationResolver )();

		/// Register the one and only File Location Resolver to the Stream Manager.
		/// \sa 
		/// - AK::StreamMgr::IAkFileLocationResolver
		AK_EXTERNAPIFUNC( void, SetFileLocationResolver )(
			IAkFileLocationResolver *	in_pFileLocationResolver ///< Interface to your File Location Resolver
			);

		/// Get the Stream Manager's pool ID, created according to setting 
		/// AkStreamMgrSettings::uMemorySize. 
		/// \remarks This is the small objects pool, not one of the device ("Stream I/O") pools.
		/// \sa 
		/// - AkStreamMgrSettings
		/// - AK::StreamMgr::Create()
		AK_EXTERNAPIFUNC( AkMemPoolId, GetPoolID )();

		//@}

		/// \name Stream Manager: High-level I/O devices management.
		//@{
		/// Streaming device creation.
		/// Creates a high-level device, with specific settings. 
		/// You need to provide the associated low-level I/O hook, implemented on your side.
		/// \return The device ID. AK_INVALID_DEVICE_ID if there was an error and it could not be created.
		/// \warning 
		/// - This function is not thread-safe.
		/// - Use a blocking hook (IAkIOHookBlocking) with SCHEDULER_BLOCKING devices, and a 
		/// deferred hook (IAkIOHookDeferred) with SCHEDULER_DEFERRED_LINED_UP devices (these flags are
		/// specified in the device settings (AkDeviceSettings). The pointer to IAkLowLevelIOHook is
		/// statically cast internally into one of these hooks. Implementing the wrong (or no) interface
		/// will result into a crash.
		/// \remarks 
		/// - You may use AK::StreamMgr::GetDefaultDeviceSettings() first to get default values for the 
		/// settings, change those you want, then feed the structure to this function.
		/// - The returned device ID should be kept by the Low-Level IO, to assign it to file descriptors 
		/// in AK::StreamMgr::IAkFileLocationResolver::Open().
		/// \sa
		/// - AK::StreamMgr::IAkLowLevelIOHook
		/// - AK::StreamMgr::GetDefaultDeviceSettings()
		/// - \ref streamingmanager_settings
		AK_EXTERNAPIFUNC( AkDeviceID, CreateDevice )(
			const AkDeviceSettings &	in_settings,		///< Device settings.
			IAkLowLevelIOHook *			in_pLowLevelHook	///< Associated low-level I/O hook. Pass either a IAkIOHookBlocking or a IAkIOHookDeferred interface, consistent with the type of the scheduler.
			);
		/// Streaming device destruction.
		/// \return AK_Success if the device was successfully destroyed.
		/// \warning This function is not thread-safe. No stream should exist for that device when it is destroyed.
		AK_EXTERNAPIFUNC( AKRESULT, DestroyDevice )(
			AkDeviceID					in_deviceID         ///< Device ID of the device to destroy.
			);

		/// Get the default values for the streaming device's settings. Recommended usage
		/// is to call this function first, then pass the settings to AK::StreamMgr::CreateDevice().
		/// \sa 
		/// - AK::StreamMgr::CreateDevice()
		/// - AkDeviceSettings
		/// - \ref streamingmanager_settings
		AK_EXTERNAPIFUNC( void, GetDefaultDeviceSettings )(
			AkDeviceSettings &			out_settings		///< Returned AkDeviceSettings structure with default values.
			);
		//@}

		/// \name Language management.
		//@{
		/// Set the current language once and only once, here. The language name is stored in a static buffer 
		/// inside the Stream Manager. In order to resolve localized (language-specific) file location,
		/// AK::StreamMgr::IAkFileLocationResolver implementations query this string. They may use it to 
		/// construct a file path (for e.g. SDK/samples/SoundEngine/Common/AkFileLocationBase.cpp), or to
		/// find a language-specific file within a look-up table (for e.g. SDK/samples/SoundEngine/Common/AkFilePackageLUT.cpp).
		/// Pass a valid null-terminated string, without a trailing slash or backslash. Empty strings are accepted.
		/// You may register for language changes (see RegisterToLanguageChangeNotification()). 
		/// After changing the current language, all observers are notified.
		/// \return AK_Success if successful (if language string has less than AK_MAX_LANGUAGE_NAME_SIZE characters). AK_Fail otherwise.
		/// \warning Not multithread safe.
		/// \sa 
		/// - AK::StreamMgr::GetCurrentLanguage()
		/// - AK::StreamMgr::AddLanguageChangeObserver()
		AK_EXTERNAPIFUNC( AKRESULT, SetCurrentLanguage )(
			const AkOSChar *	in_pszLanguageName			///< Language name.
			);

		/// Get the current language. The language name is stored in a static buffer inside the Stream Manager, 
		/// with AK::StreamMgr::SetCurrentLanguage(). In order to resolve localized (language-specific) file location,
		/// AK::StreamMgr::IAkFileLocationResolver implementations query this string. They may use it to 
		/// construct a file path (for e.g. SDK/samples/SoundEngine/Common/AkFileLocationBase.cpp), or to
		/// find a language-specific file within a look-up table (for e.g. SDK/samples/SoundEngine/Common/AkFilePackageLUT.cpp).
		/// \return Current language.
		/// \sa AK::StreamMgr::SetCurrentLanguage()
		AK_EXTERNAPIFUNC( const AkOSChar *, GetCurrentLanguage )();

		/// Definition of handlers for language change notifications.
		/// Called after SetCurrentLanguage() is called.
		/// \warning Do not call AddLanguageChangeObserver or SetCurrentLanguage from within your handler.
		/// \warning Not multithread safe.
		/// \sa 
		/// - AK::StreamMgr::SetCurrentLanguage()
		/// - AK::StreamMgr::AddLanguageChangeObserver()
		AK_CALLBACK( void, AkLanguageChangeHandler )( 
			const AkOSChar * const in_pLanguageName,///< New language name.
			void * in_pCookie						///< Cookie that was passed to AddLanguageChangeObserver().
			);

		/// Register to language change notifications.
		/// \return AK_Success if successful, AK_Fail otherwise (no memory or no cookie).
		/// \warning Not multithread safe.
		/// \sa 
		/// - AK::StreamMgr::SetCurrentLanguage()
		/// - AK::StreamMgr::RemoveLanguageChangeObserver()
		AK_EXTERNAPIFUNC( AKRESULT, AddLanguageChangeObserver )(
			AkLanguageChangeHandler in_handler,	///< Callback function.
			void * in_pCookie					///< Cookie, passed back to AkLanguageChangeHandler. Must set.
			);

		/// Unregister to language change notifications. Use the cookie you have passed to 
		/// AddLanguageChangeObserver() to identify the observer.
		/// \warning Not multithread safe.
		/// \sa 
		/// - AK::StreamMgr::SetCurrentLanguage()
		/// - AK::StreamMgr::AddLanguageChangeObserver()
		AK_EXTERNAPIFUNC( void, RemoveLanguageChangeObserver )(
			void * in_pCookie					///< Cookie that was passed to AddLanguageChangeObserver().
			);

		/// \name Stream Manager: Cache management.
		//@{
		/// Flush cache of all devices. This function has no effect for devices where
		/// AkDeviceSettings::bUseStreamCache was set to false (no caching).
		/// \sa
		/// - \ref streamingmanager_settings
		AK_EXTERNAPIFUNC( void, FlushAllCaches )();
		
		//@}
	}
}

#endif //_AK_STREAM_MGR_MODULE_H_
