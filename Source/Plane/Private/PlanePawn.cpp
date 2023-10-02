// Copyright Alec Greene. All Rights Reserved.

#include "PlanePawn.h"

APlanePawn::APlanePawn()
{
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
	bUseControllerRotationYaw = true;

	// 2023/10/01 -- #todo add ability system to ChimeraGame

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh Comp"));
	
	MovementComp = CreateDefaultSubobject<UPawnMovementComponent>(TEXT("Movement Comp"));
}