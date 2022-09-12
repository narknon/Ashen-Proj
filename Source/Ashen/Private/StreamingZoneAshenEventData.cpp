#include "StreamingZoneAshenEventData.h"

bool UStreamingZoneAshenEventData::IsBlockOnLoad() {
    return false;
}

bool UStreamingZoneAshenEventData::IsAreaChange() {
    return false;
}

EStreamingZoneEventType UStreamingZoneAshenEventData::GetZoneStreamingEventType() {
    return EStreamingZoneEventType::ZoneRequested;
}

FStreamingZoneData UStreamingZoneAshenEventData::GetZoneData() {
    return FStreamingZoneData{};
}

FName UStreamingZoneAshenEventData::GetRowName() {
    return NAME_None;
}

UStreamingZoneAshenEventData::UStreamingZoneAshenEventData() {
}

