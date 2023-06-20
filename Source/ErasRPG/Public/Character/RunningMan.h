// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunningMan.generated.h"



UCLASS()
class ERASRPG_API ARunningMan : public ACharacter
{
	GENERATED_BODY()

public:

	ARunningMan();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:

	virtual void BeginPlay() override;

private:


public:	


};
