#include "AshenMenuState.h"

class UAshenStateSave;
class UQuestLine;

void AAshenMenuState::StartGame(bool bNewGame) {
}

bool AAshenMenuState::QuerySaveDataForDlcUnlocked(UAshenStateSave* Save, UQuestLine* QuestLine, FQuestStateTag DlcUnlockedQuestStateTag) {
    return false;
}

AAshenMenuState::AAshenMenuState() {
}

