#include "AIAshenMetronomeWaitRequest.h"

class ACreature;
class UAshenAnimMetronomeNotify;

void UAIAshenMetronomeWaitRequest::OnMetronome(ACreature* Source, const UAshenAnimMetronomeNotify* Notify) {
}

UAIAshenMetronomeWaitRequest::UAIAshenMetronomeWaitRequest() {
    this->CreatureOwner = NULL;
}

