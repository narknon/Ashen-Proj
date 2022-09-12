#pragma once
#include "CoreMinimal.h"
#include "MatchmakingKey.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CompiledContentVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CompiledPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainQuestState;
    
    ASHEN_API FMatchmakingKey();
};

