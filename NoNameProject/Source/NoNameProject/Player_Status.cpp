// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Status.h"

// Sets default values for this component's properties
UPlayer_Status::UPlayer_Status()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	vida = 100.0f;
	walkNoise = 50.0f;
	// ...
}


// Called when the game starts
void UPlayer_Status::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayer_Status::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UPlayer_Status::getVida()
{
	return vida;

}

float UPlayer_Status::getNoise()
{
	return walkNoise;

}


void UPlayer_Status::setVida(int _vida)
{
	vida = _vida;

}

void UPlayer_Status::setNoise(int _noise)
{
	walkNoise = _noise;

}