#include "WraithContextTeleportRules.h"

FWraithContextTeleportRules::FWraithContextTeleportRules() {
    this->TeleportTrigger = NULL;
    this->TeleportPoint = NULL;
    this->TeleportDelay = 0.00f;
    this->TriggerMinRelationLevel = EAIRelationship::Hostile;
    this->ChangeContextOnTeleport = EAIContextType::None;
    this->ChangeBTOnTeleport = NULL;
    this->bTriggerOnHeroOnly = false;
    this->bTriggerOnExit = false;
    this->bTriggerOnEnter = false;
    this->bAutoPerceiveTriggeringCreature = false;
    this->bDumpPerceptionMemoryOnTeleport = false;
    this->bSkipContextBTChange = false;
}

