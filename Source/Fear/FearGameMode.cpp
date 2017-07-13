// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FearGameMode.h"
#include "FearHUD.h"
#include "FearCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFearGameMode::AFearGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFearHUD::StaticClass();
}
