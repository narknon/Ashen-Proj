#include "RaidenData.h"

FRaidenData::FRaidenData() {
    this->SunIntensity = 0.00f;
    this->SunIntensityHighlands = 0.00f;
    this->SunLightShaftOcclusion = false;
    this->SunLightShaftBloom = false;
    this->SunLightShaftBloomScale = 0.00f;
    this->SunLightShaftBloomThreshold = 0.00f;
    this->SunLightShaftOcclusionMaskDarkness = 0.00f;
    this->SunLightShaftOcclusionDepthRange = 0.00f;
    this->SkylightIntensity = 0.00f;
    this->SkylightCubemap = NULL;
    this->SkylightMinOcclusion = 0.00f;
    this->HeightFogZ = 0.00f;
    this->HeightFogDensity = 0.00f;
    this->HeightFogFalloff = 0.00f;
    this->HeightFogMaxOpacity = 0.00f;
    this->HeightFogStartDistance = 0.00f;
    this->HeightFogDirectionalInscatterExponent = 0.00f;
    this->HeightFogDirectionalInscatterStartDistance = 0.00f;
    this->LanternIntensitySpot = 0.00f;
    this->LanternAttenuationRadius = 0.00f;
    this->LanternFillIntensity = 0.00f;
    this->LanternFillAttenuationRadius = 0.00f;
    this->SkydomeSunIntensity = 0.00f;
    this->SkydomeSunFalloff = 0.00f;
    this->HorizonFalloff = 0.00f;
    this->GnawIntensity = 0.00f;
    this->GnawFalloff = 0.00f;
    this->WindStrength = 0.00f;
    this->WindSpeed = 0.00f;
    this->WindMinGustAmount = 0.00f;
    this->WindMaxGustAmount = 0.00f;
    this->ParticleRateFlakes = 0.00f;
    this->ParticleRateDust = 0.00f;
    this->ParticleRateStorm = 0.00f;
    this->ParticleRateStormSettled = 0.00f;
    this->CloudCoverageFrequency = 0.00f;
    this->CloudCoverageContrast = 0.00f;
    this->CloudOpacityFoothills = 0.00f;
    this->CloudOpacityFjord = 0.00f;
    this->CloudOpacityHighlands = 0.00f;
    this->CloudOpacityTutorial = 0.00f;
    this->LockOnModifier = 0.00f;
    this->CameraLagHorizontal = 0.00f;
    this->CameraLagForward = 0.00f;
    this->LightLevel = ELightLevel::Undefined;
    this->EnvironmentType = EEnvironmentType::Standard;
}

