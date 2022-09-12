#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QuestStateTag.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "EUIMapMarkerType.h"
#include "QuestAreaData.generated.h"

class UPaperSprite;
class UQuestLine;
class UQuestState;

USTRUCT(BlueprintType)
struct ASHEN_API FQuestAreaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SelfRefrence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMapMarkerType MarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* MarkerTextureOveride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerSizeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestLine*> QuestLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UQuestState>> ActiveFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> NotActiveIf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> QuestLineHasAnyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysActive;
    
    FQuestAreaData();
};

