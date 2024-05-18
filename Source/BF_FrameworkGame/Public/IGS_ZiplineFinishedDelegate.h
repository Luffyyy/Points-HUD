#pragma once
#include "CoreMinimal.h"
#include "IGS_ZiplineFinishedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ZiplineFinished, AIGS_GameCharacterFramework*, inPawn);

