// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "GameJamGame.h"
#include "GameJamGameGameMode.h"
#include "GameJamGameCharacter.h"

AGameJamGameGameMode::AGameJamGameGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AGameJamGameCharacter::StaticClass();	
}
