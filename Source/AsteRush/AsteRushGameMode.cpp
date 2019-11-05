// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AsteRushGameMode.h"
#include "AsteRushPawn.h"

AAsteRushGameMode::AAsteRushGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAsteRushPawn::StaticClass();
}

