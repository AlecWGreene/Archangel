// Copyright Alec Greene. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PawnMovementComponent.h"

#include "PlanePawn.generated.h"

/**
* 
*/
UCLASS()
class PLANE_API APlanePawn : public APawn, public IAbilitySystemInterface
{
	GENERATED_BODY()

	//============================================
	//==	Overrides							==
	//============================================
public:

	APlanePawn();

	//----- Begin IAbilitySystemInterface			-----//
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComp; };
	//----- End   IAbilitySystemInterface			-----//

	//============================================
	//==	Blueprint Getters					==
	//============================================
public:

	/** Skeletal mesh which is used for the visual representation of the pawn. */
	UFUNCTION(BlueprintCallable)
	FORCEINLINE USkeletalMeshComponent* GetMeshComp() const { return MeshComp; }

	/** Skeletal mesh which is used for the visual representation of the pawn. */
	template<class CompClass>
	FORCEINLINE CompClass* GetMeshComp() const { return Cast<CompClass>(MeshComp); };

	virtual UPawnMovementComponent* GetMovementComponent() const override { return MovementComp;  };

	/** Controls the movement of the pawn. */
	template<class CompClass>
	FORCEINLINE CompClass* GetMovementComponent() const { return Cast<CompClass>(MovementComp); };

	//============================================
	//==	Components							==
	//============================================
protected:

	UPROPERTY(Category = Visuals, VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComp;

	UPROPERTY(Category = Visuals, VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<USkeletalMeshComponent> MeshComp;

	UPROPERTY(Category = Visuals, VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UPawnMovementComponent> MovementComp;
};