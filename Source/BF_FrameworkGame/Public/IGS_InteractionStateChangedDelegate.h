#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_InteractionStateChanged, bool, inState);

