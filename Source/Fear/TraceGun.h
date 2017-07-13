// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "TraceGun.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class FEAR_API UTraceGun : public UWeaponBase
{
	GENERATED_BODY()

public:
		void PrimaryFire();
		void SecondaryFire();
		void Reload();


};
