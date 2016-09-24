// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = GetPlayerTank();
	if (PlayerTank)
	{
		//TODO move towards the player

		//Aim towards the player
		GetControlledTank()->AimAt(PlayerTank->GetActorLocation());

		//TODO fire when ready
	}
}

ATank *ATankAIController::GetControlledTank() const
{
	auto ControlledPawn = GetPawn();
	if (!ControlledPawn) { return nullptr; }
	return Cast<ATank>(ControlledPawn);
}

ATank *ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; }
	return Cast<ATank>(PlayerPawn);
}
