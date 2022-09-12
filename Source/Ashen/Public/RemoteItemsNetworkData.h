#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EItemQuality.h"
#include "PhysicalItemNetworkData.h"
#include "RemoteItemsNetworkData.generated.h"

class UItemBase;

USTRUCT(BlueprintType)
struct FRemoteItemsNetworkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemBase>> BeltItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemBase>> DrawnEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemQuality> DrawnEquipmentQuality;
    
    UPROPERTY(EditAnywhere)
    TArray<int8> DrawnEquipmentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemBase>> HolsteredEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemQuality> HolsteredEquipmentQuality;
    
    UPROPERTY(EditAnywhere)
    TArray<int8> HolsteredEquipmentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicalItemNetworkData> PhysicalEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemBase>> RelicItems;
    
    ASHEN_API FRemoteItemsNetworkData();
};

