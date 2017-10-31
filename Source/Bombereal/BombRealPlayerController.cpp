// Fill out your copyright notice in the Description page of Project Settings.

#include "BombRealPlayerController.h"



void ABombRealPlayerController::SetPawn(APawn * InPawn) {

	AController::SetPawn(InPawn);

	OnSetPawn(InPawn);

}
