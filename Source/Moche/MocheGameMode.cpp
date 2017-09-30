// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MocheGameMode.h"
#include "MocheHUD.h"
#include "MocheCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMocheGameMode::AMocheGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMocheHUD::StaticClass();
}
