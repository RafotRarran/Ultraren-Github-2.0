// Copyright Epic Games, Inc. All Rights Reserved.

#include "UltrarenGameMode.h"
#include "UltrarenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUltrarenGameMode::AUltrarenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Github-2.0/Content/Blueprints/BP_PlayerCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
