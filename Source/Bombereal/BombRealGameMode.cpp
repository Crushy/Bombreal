// Fill out your copyright notice in the Description page of Project Settings.

#include "BombRealGameMode.h"
#include "UObject/ConstructorHelpers.h"

ABombRealGameMode::ABombRealGameMode()
{
	// use our custom PlayerController class
	static ConstructorHelpers::FClassFinder<AController> ControllerBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}