// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "BombrealViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class BOMBEREAL_API UBombrealViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
	
	virtual bool InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed = 1.f, bool bGamepad = false) override;
	
	
};
