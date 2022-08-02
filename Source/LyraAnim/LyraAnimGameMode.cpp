// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraAnimGameMode.h"
#include "LyraAnimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALyraAnimGameMode::ALyraAnimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
