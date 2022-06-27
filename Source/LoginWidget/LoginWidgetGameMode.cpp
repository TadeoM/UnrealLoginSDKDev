// Copyright Epic Games, Inc. All Rights Reserved.

#include "LoginWidgetGameMode.h"
#include "LoginWidgetHUD.h"
#include "LoginWidgetCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALoginWidgetGameMode::ALoginWidgetGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALoginWidgetHUD::StaticClass();
}
