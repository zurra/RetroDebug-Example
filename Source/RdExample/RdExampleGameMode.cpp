// Copyright Epic Games, Inc. All Rights Reserved.

#include "RdExampleGameMode.h"
#include "RdExampleHUD.h"
#include "RdExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARdExampleGameMode::ARdExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARdExampleHUD::StaticClass();
}
