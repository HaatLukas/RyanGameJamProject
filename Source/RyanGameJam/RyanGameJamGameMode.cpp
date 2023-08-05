// Copyright Epic Games, Inc. All Rights Reserved.

#include "RyanGameJamGameMode.h"
#include "RyanGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARyanGameJamGameMode::ARyanGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
