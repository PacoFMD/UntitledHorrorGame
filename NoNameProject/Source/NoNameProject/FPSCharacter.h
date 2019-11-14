// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "FPSCharacter.generated.h"

class UInputComponent;
class ALightSwitchPushButton;

UCLASS()
class NONAMEPROJECT_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	//First person camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAcces = "true"))
		class UCameraComponent* CameraComponent;

	class ALightSwitchPushButton* CurrentLightSwitch;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// declare overlap end function
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// declare current light switch
	class ALightSwitchPushButton* CurrentLightSwitch;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward (float val);
	void MoveRight (float val);

	virtual void SetupPlayerInputComponent(UInputComponent * InputComponent) override;
	void OnAction();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void SimpleAction();

	UFUNCTION()
		void SimpleActionRelease();
	
};
