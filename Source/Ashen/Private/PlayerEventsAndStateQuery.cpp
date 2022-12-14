#include "PlayerEventsAndStateQuery.h"

FPlayerEventsAndStateQuery::FPlayerEventsAndStateQuery() {
    this->NameAutoGenerated = false;
    this->QuestLine = NULL;
    this->EventsWhiteRule = EWhiteAndBlackListRule::AllValid;
    this->EventsBlackRule = EWhiteAndBlackListRule::AllValid;
    this->StateWhiteRule = EWhiteAndBlackListRule::AllValid;
    this->StateBlackRule = EWhiteAndBlackListRule::AllValid;
    this->QueryWhiteRule = EWhiteAndBlackListRule::AllValid;
    this->QueryBlackRule = EWhiteAndBlackListRule::AllValid;
    this->TagWhiteRule = EWhiteAndBlackListRule::AllValid;
    this->TagBlackRule = EWhiteAndBlackListRule::AllValid;
    this->SaveQueryResults = false;
    this->AutoBumpQuerySuccessWhenValid = false;
    this->TrackCallsMade = 0;
}

