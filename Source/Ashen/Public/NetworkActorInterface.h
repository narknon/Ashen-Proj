#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/Interface.h"
#include "NetworkActorInterface.generated.h"

class UNetworkComponent;

UINTERFACE(Blueprintable)
class ASHEN_API UNetworkActorInterface : public UInterface {
    GENERATED_BODY()
};

class ASHEN_API INetworkActorInterface : public IInterface {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    virtual void SetRemoteRole(TEnumAsByte<ENetRole> NetRole) PURE_VIRTUAL(SetRemoteRole,);
    
    UFUNCTION()
    virtual void RemoteOrphaned() PURE_VIRTUAL(RemoteOrphaned,);
    
    UFUNCTION()
    virtual void RemoteInitialise() PURE_VIRTUAL(RemoteInitialise,);
    
    UFUNCTION()
    virtual void OpenChannel() PURE_VIRTUAL(OpenChannel,);
    
    UFUNCTION()
    virtual void OnOpenChannel() PURE_VIRTUAL(OnOpenChannel,);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNetworkComponent* GetNetworkComponent();
    
private:
    UFUNCTION()
    virtual void AuthorityReset() PURE_VIRTUAL(AuthorityReset,);
    
    UFUNCTION()
    virtual void AuthorityInitialise() PURE_VIRTUAL(AuthorityInitialise,);
    
};

