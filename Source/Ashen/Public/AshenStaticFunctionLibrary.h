#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/Object.h"
#include "AshenStaticFunctionLibrary.generated.h"

class AInstancedFoliageActor;
class AActor;
class UPrimitiveComponent;
class UActorComponent;
class UAshenSingleton;
class UDataTable;

UCLASS(Blueprintable)
class ASHEN_API UAshenStaticFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UAshenStaticFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateFoliageBaseComponent(AInstancedFoliageActor* IFA, UPrimitiveComponent* OldComp, UPrimitiveComponent* NewComp);
    
    UFUNCTION(BlueprintCallable)
    static void SplitText(FText InText, FText& OutLeft, FText& OutIcon, FText& OutRight);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* ActorComponent, bool bCanEverAffectNavigation);
    
    UFUNCTION(BlueprintCallable)
    static void SaveStringToFile(const FString& String, const FString& Filename, bool OverwriteFileContents);
    
    UFUNCTION(BlueprintCallable)
    static void RenameActor(AActor* Actor, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    static void OutputStructToJson(UDataTable* DataTable, int32 RowNumber, const FString& Filename, FTableRowBase DataStruct);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* NewObjectFromBlueprint(UObject* WorldContextObject, UClass* UC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFramesPerSecond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAshenSingleton* GetAshenSingleton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAppDeltaTime();
    
    UFUNCTION(BlueprintCallable)
    static bool ExtractNetworkMessage(const FString& Message, const FString& MessageType, FString& OutSubMessage);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteFile(const FString& Filename);
    
};

