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
AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
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

void AMyCharacter::Jump()
{
	if (bCanJump)
	{
		ACharacter::Jump();
		bCanJump = false;
	}
}

void AMyCharacter::Move(const FInputActionValue& Value)
{
}

void AMyCharacter::Look(const FInputActionValue& Value)
{

}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancePlayerComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Moving
		EnhancePlayerComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);

		//Looking
		EnhancePlayerComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);

		//jump
		EnhancePlayerComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMyCharacter::Jump);
	}
}

