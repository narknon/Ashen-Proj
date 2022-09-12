#include "AreaSDFTextures.h"

FAreaSDFTextures::FAreaSDFTextures() {
    this->GroundSDF = NULL;
    this->InvertGround = false;
    this->SmallSDF = NULL;
    this->InvertSmall = false;
    this->StructSDF = NULL;
    this->InvertStruct = false;
    this->MountainsSDF = NULL;
    this->InvertMountains = false;
    this->WaterSDF = NULL;
    this->InvertWater = false;
    this->PathSDF = NULL;
    this->InvertPath = false;
    this->BoarderSDF = NULL;
    this->InvertBoarder = false;
    this->InvertUnExplored = false;
}

