// Fill out your copyright notice in the Description page of Project Settings.


#include "ErasCharacter/MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
Artic::Artic()
{
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
}

// Called when the game starts or when spawned
void Artic::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(ErasContext, 0);
		}
	}
}

void Artic::Jump()
{
	if (bCanJump)
	{
		ACharacter::Jump();
		bCanJump = false;
	}
}

void Artic::Move(const FInputActionValue& Value)
{
}

void Artic::Look(const FInputActionValue& Value)
{

}

// Called every frame
void Artic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Artic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancePlayerComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Moving
		EnhancePlayerComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &Artic::Move);

		//Looking
		EnhancePlayerComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &Artic::Look);

		//jump
		EnhancePlayerComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &Artic::Jump);
	}
}

