// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing: %s\n"), *(ControlledTank->GetName()));
	}
}


ATank *ATankPlayerController::GetControlledTank() const
{
	auto ControlledPawn = GetPawn();
	if (!ControlledPawn) { return nullptr; }
	return Cast<ATank>(ControlledPawn);
}
