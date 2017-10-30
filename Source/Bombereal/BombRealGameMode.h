// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BombRealGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BOMBEREAL_API ABombRealGameMode : public AGameModeBase
{
	GENERATED_BODY()

public :
	ABombRealGameMode();
	
	virtual void StartPlay();
};
