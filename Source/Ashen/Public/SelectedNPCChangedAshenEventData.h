#pragma once
#include "CoreMinimal.h"
#include "NpcAshenEventData.h"
#include "SelectedNPCChangedAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API USelectedNPCChangedAshenEventData : public UNpcAshenEventData {
    GENERATED_BODY()
public:
    USelectedNPCChangedAshenEventData();
};

