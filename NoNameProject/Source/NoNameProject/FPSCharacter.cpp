// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.0f, 96.0f);

	//Create cameraComponent
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 65.0f); //Position the Camera
	CameraComponent->bUsePawnControlRotation = true;

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSCharacter::SetupPlayerInputComponent(class UInputComponent * PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("SimpleAction", IE_Pressed, this, &AFPSCharacter::SimpleAction);
	PlayerInputComponent->BindAction("SimpleAction", IE_Released, this, &AFPSCharacter::SimpleActionRelease);


	//WASD Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	//Mouse Axis binding
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

}

void AFPSCharacter::MoveForward(float val)
{
	if (val != 0)
	{
		AddMovementInput(GetActorForwardVector(), val);
	}
}

void AFPSCharacter::MoveRight(float val)
{
	if (val != 0)
	{
		AddMovementInput(GetActorRightVector(), val);
	}
}

void AFPSCharacter::SimpleAction()
{
	UE_LOG(LogTemp, Warning, TEXT("Presionaste E"));
}

void AFPSCharacter::SimpleActionRelease()
{
	UE_LOG(LogTemp, Warning, TEXT("Dejaste de presionar E"));
}
