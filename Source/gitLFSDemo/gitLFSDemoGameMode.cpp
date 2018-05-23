// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "gitLFSDemoGameMode.h"
#include "gitLFSDemoHUD.h"
#include "gitLFSDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgitLFSDemoGameMode::AgitLFSDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AgitLFSDemoHUD::StaticClass();
}
