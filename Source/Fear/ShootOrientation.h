// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class FEAR_API ShootOrientation
{
public:
	ShootOrientation();
	ShootOrientation(FVector origin, FRotator rotation);
	~ShootOrientation();

	FVector GetOrigin();

	void SetOrigin(FVector origin);

	FRotator GetRotation();

	void SetRotation(FRotator rotation);

private:
	FVector origin;
	FRotator rotation;
};
