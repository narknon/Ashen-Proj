#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NetworkActorInterface.h"
#include "Engine/EngineTypes.h"
#include "NetworkActor.generated.h"

class UNetworkComponent;

UCLASS(Abstract, Blueprintable)
class ASHEN_API ANetworkActor : public AActor/*, public INetworkActorInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNetworkComponent* NetworkComponent;
    
    ANetworkActor();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OpenChannelRPC();
    
    
    // Fix for true pure virtual functions not being implemented
private:
    /*UFUNCTION()
    void SetRemoteRole(TEnumAsByte<ENetRole> NetRole) override PURE_VIRTUAL(SetRemoteRole,);
    
    UFUNCTION()
    void RemoteOrphaned() override PURE_VIRTUAL(RemoteOrphaned,);
    
    UFUNCTION()
    void RemoteInitialise() override PURE_VIRTUAL(RemoteInitialise,);
    
    UFUNCTION()
    void OpenChannel() override PURE_VIRTUAL(OpenChannel,);
    
    UFUNCTION()
    void OnOpenChannel() override PURE_VIRTUAL(OnOpenChannel,);
    
    UFUNCTION()
    void AuthorityReset() override PURE_VIRTUAL(AuthorityReset,);
    
    UFUNCTION()
    void AuthorityInitialise() override PURE_VIRTUAL(AuthorityInitialise,);*/
    
};

