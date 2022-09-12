#pragma once
#include "CoreMinimal.h"
#include "AshenLevelStreamingAgent.generated.h"

class AAshenGameMode;
class ULevelEventCallback;
class ULevelStreaming;

USTRUCT(BlueprintType)
struct ASHEN_API FAshenLevelStreamingAgent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelEventCallback*> Callbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLoadedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ULevelStreaming*> PackageNameToStreamingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplayerLevelRequestTimeOut;
    
public:
    FAshenLevelStreamingAgent();
};

