#include "AshenStaticFunctionLibrary.h"

class AInstancedFoliageActor;
class AActor;
class UPrimitiveComponent;
class UActorComponent;
class UAshenSingleton;
class UDataTable;
class UObject;

void UAshenStaticFunctionLibrary::UpdateFoliageBaseComponent(AInstancedFoliageActor* IFA, UPrimitiveComponent* OldComp, UPrimitiveComponent* NewComp) {
}

void UAshenStaticFunctionLibrary::SplitText(FText InText, FText& OutLeft, FText& OutIcon, FText& OutRight) {
}

void UAshenStaticFunctionLibrary::SetCanEverAffectNavigation(UActorComponent* ActorComponent, bool bCanEverAffectNavigation) {
}

void UAshenStaticFunctionLibrary::SaveStringToFile(const FString& String, const FString& Filename, bool OverwriteFileContents) {
}

void UAshenStaticFunctionLibrary::RenameActor(AActor* Actor, const FString& NewName) {
}

void UAshenStaticFunctionLibrary::OutputStructToJson(UDataTable* DataTable, int32 RowNumber, const FString& Filename, FTableRowBase DataStruct) {
}

UObject* UAshenStaticFunctionLibrary::NewObjectFromBlueprint(UObject* WorldContextObject, UClass* UC) {
    return NULL;
}

int32 UAshenStaticFunctionLibrary::GetFramesPerSecond() {
    return 0;
}

UAshenSingleton* UAshenStaticFunctionLibrary::GetAshenSingleton() {
    return NULL;
}

float UAshenStaticFunctionLibrary::GetAppDeltaTime() {
    return 0.0f;
}

bool UAshenStaticFunctionLibrary::ExtractNetworkMessage(const FString& Message, const FString& MessageType, FString& OutSubMessage) {
    return false;
}

void UAshenStaticFunctionLibrary::DeleteFile(const FString& Filename) {
}

UAshenStaticFunctionLibrary::UAshenStaticFunctionLibrary() {
}

