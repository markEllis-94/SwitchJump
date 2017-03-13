// Fill out your copyright notice in the Description page of Project Settings.

#include "SwitchJump.h"
#include "SwitchJumpGameModeBase.h"

ASwitchJumpGameModeBase::ASwitchJumpGameModeBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void ASwitchJumpGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Using Game mode"));
	}
}




