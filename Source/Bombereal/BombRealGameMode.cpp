// Fill out your copyright notice in the Description page of Project Settings.

#include "BombRealGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ABombRealGameMode::ABombRealGameMode()
{
	// use our custom PlayerController class
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/BombReal/Blueprints/TopDownController"));
	PlayerControllerClass = PlayerControllerBPClass.Class;

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BombReal/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}