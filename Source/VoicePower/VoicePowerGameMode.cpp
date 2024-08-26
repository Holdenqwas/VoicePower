// Copyright Epic Games, Inc. All Rights Reserved.

#include "VoicePowerGameMode.h"
#include "VoicePowerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVoicePowerGameMode::AVoicePowerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
