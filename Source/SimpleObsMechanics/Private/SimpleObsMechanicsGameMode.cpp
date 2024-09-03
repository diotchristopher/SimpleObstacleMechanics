// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleObsMechanicsGameMode.h"
#include "SimpleObsMechanicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASimpleObsMechanicsGameMode::ASimpleObsMechanicsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
