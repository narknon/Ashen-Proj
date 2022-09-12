#pragma once
#include "CoreMinimal.h"
#include "AshenSerialization.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAshenSerialization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LittleEndian;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Data;
    
    FAshenSerialization();
};

