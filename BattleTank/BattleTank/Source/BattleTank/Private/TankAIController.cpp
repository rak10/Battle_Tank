// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller not possessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI possessing tank: %s"), *(ControlledTank->GetName()));
	}
}





ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

