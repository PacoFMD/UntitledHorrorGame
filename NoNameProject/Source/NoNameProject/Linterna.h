// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Linterna.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NONAMEPROJECT_API ULinterna : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULinterna();
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	bool turnOn();
	bool turnOff();
	void recharge();
	void drainPower();
	void dropDead();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// mis variables

	int maxLife;
	int life;
	bool works;
	bool dead;
	
		
};
