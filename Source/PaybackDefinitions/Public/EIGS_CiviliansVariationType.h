#pragma once
#include "CoreMinimal.h"
#include "EIGS_CiviliansVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CiviliansVariationType : uint8 {
    US_None,
    US_Office,
    US_Beach,
    US_Bank,
    US_Street,
    US_StreetNight,
    US_WomenStreet,
    US_Homeless,
    US_Workout,
    US_Workers,
    US_Fishers,
    US_Laboratory,
    US_Strippers,
    US_Beach_M,
    US_Beach_F,
    US_Bank_M,
    US_Bank_F,
    US_Street_M,
    US_StreetNight_M,
    US_StreetNight_F,
    US_Homeless_M,
    US_Homeless_F,
    US_Workout_M,
    US_Workout_F,
    US_Fisher_M,
    US_Fisher_F,
    US_Bar,
    US_Bar_M,
    US_Bar_F,
    US_Beach_Shoes,
    US_Beach_Shoes_M,
    US_Beach_Shoes_F,
    US_Workout_Shoeless,
    US_Workout_Shoeless_M,
    US_Workout_Shoeless_F,
    US_FPSMaxIndex = 128,
    US_STO_Satellite,
    US_STO_Laboratory,
    US_STO_PrisonOrg,
    US_STO_PrisonTwl,
    US_Unknown = 255,
};
