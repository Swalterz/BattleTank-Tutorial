// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float RelativeSpeed)
{
	//Move barrel right amount this frame
	//given a max elevation speed and the frame time
	auto Time = GetWorld()->GetTimeSeconds();
}
