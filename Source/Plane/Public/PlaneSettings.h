// Copyright Alec Greene. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

#include "PlaneSettings.generated.h"

UCLASS()
class PLANE_API UPlaneSettings :
    public UDeveloperSettings
{
    GENERATED_BODY()

    //============================================
    //==	Methods 							==
    //============================================
public:

    UFUNCTION(BlueprintCallable)
    static const UPlaneSettings* Get() { return GetDefault<UPlaneSettings>(); }

};

