// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LandingANNGameMode.h"
#include "LandingANNCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALandingANNGameMode::ALandingANNGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
