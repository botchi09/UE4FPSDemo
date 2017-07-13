// Fill out your copyright notice in the Description page of Project Settings.

#include "ShootOrientation.h"

ShootOrientation::ShootOrientation(FVector origin, FRotator rotation)
{
	origin = origin;
	rotation = rotation;
}

ShootOrientation::~ShootOrientation()
{
}

FVector ShootOrientation::GetOrigin()
{
	return origin;
}

void ShootOrientation::SetOrigin(FVector origin)
{
	origin = origin;
}

FRotator ShootOrientation::GetRotation()
{
	return rotation;
}

void ShootOrientation::SetRotation(FRotator rotation)
{
	rotation = rotation;
}

