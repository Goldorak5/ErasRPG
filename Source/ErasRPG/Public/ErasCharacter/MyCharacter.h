// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"


class UCapsuleComponent;
class UCameraComponent;
class USpringArmComponent;
class UInputAction;
class UInputMappingContext;

UCLASS()
class ERASRPG_API Artic : public ACharacter
{
	GENERATED_BODY()

public:
	Artic();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<UInputMappingContext> ErasContext;

	UPROPERTY(EditAnywhere, Category = Input)
		TObjectPtr < UInputAction> MovementAction;

	UPROPERTY(EditAnywhere, Category = Input)
		TObjectPtr < UInputAction> LookAction;

	UPROPERTY(EditAnywhere, Category = Input)
		TObjectPtr < UInputAction> JumpAction;

	//Call Back Input
	void Jump();

	UPROPERTY(BlueprintReadOnly)
	bool bCanJump = true;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetCanJump(bool bCan) {bCanJump = bCan;}

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

private:

	UPROPERTY(EditAnywhere, Category = "Component")
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(EditAnywhere, Category = "Component")
	TObjectPtr <UCapsuleComponent> Capsule;

	UPROPERTY(EditAnywhere, Category = "Component")
	TObjectPtr <USpringArmComponent> SpringArm;


public:	


};
