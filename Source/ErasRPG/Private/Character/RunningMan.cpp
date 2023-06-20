// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/RunningMan.h"

// Sets default values
ARunningMan::ARunningMan()
{
	PrimaryActorTick.bCanEverTick = true;

}


void ARunningMan::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARunningMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARunningMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

