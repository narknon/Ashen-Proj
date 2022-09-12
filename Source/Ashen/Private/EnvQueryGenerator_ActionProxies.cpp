#include "EnvQueryGenerator_ActionProxies.h"
#include "ActionProxy.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_ActionProxies::UEnvQueryGenerator_ActionProxies() {
    this->SearchedActionProxyClass = UActionProxy::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

