#include "AnimNode_RigidBody.h"

FAnimNode_RigidBody::FAnimNode_RigidBody() {
    this->OverridePhysicsAsset = NULL;
    this->OverlapChannel = ECC_WorldStatic;
    this->bEnableWorldGeometry = false;
    this->SimulationSpace = ESimulationSpace::ComponentSpace;
    this->bOverrideWorldGravity = false;
    this->CachedBoundsScale = 0.00f;
    this->bTransferBoneVelocities = false;
    this->bFreezeIncomingPoseOnStart = false;
    this->bComponentSpaceSimulation = false;
}

