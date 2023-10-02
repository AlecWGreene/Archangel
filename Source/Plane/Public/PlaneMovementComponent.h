// Copyright Alec Greene. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"

#include "PlaneMovementComponent.generated.h"

UCLASS()
class PLANE_API UPlaneMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:

	UPlaneMovementComponent();
};

