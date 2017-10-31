// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BombRealPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BOMBEREAL_API ABombRealPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "Controller")

	/**
	* Called when a new pawn is assigned to this controller
	*/
	void OnSetPawn(APawn * InPawn);

	virtual void SetPawn(APawn * InPawn);
	
};
