// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "try1GameMode.h"
#include "try1Pawn.h"
#include "try1Hud.h"

Atry1GameMode::Atry1GameMode()
{
	DefaultPawnClass = Atry1Pawn::StaticClass();
	HUDClass = Atry1Hud::StaticClass();
}
