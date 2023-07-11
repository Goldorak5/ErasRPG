// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunningMan.generated.h"


class UInputMappingContext;
class USpringArmComponent;
class UCapsuleComponent;


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

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputMappingContext> ErasContext;

	UPROPERTY(EditAnywhere, Category = "Component")
	TObjectPtr<UCapsuleComponent> Capsule;
	
	UPROPERTY(EditAnywhere, Category = "Component")
	TObjectPtr<USpringArmComponent> SpringArm;

private:


public:	


};
