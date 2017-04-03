// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "SitchJumpCharacter.h"
#include "SwitchJumpGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class SWITCHJUMP_API ASwitchJumpGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		ASwitchJumpGameModeBase(const FObjectInitializer& ObjectInitializer);
		virtual void StartPlay() override;
	
	
	
};
