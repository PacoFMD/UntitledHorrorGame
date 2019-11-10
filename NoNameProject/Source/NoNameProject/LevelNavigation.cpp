// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelNavigation.h"
#include "Engine/World.h"
#include "Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values for this component's properties
ULevelNavigation::ULevelNavigation()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULevelNavigation::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULevelNavigation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void ULevelNavigation::ChangeLevel(FString _Name) {
	UWorld* MyWorld = GetWorld();

	FString CurrentLevel = MyWorld->GetMapName();

	UGameplayStatics::OpenLevel(MyWorld, FName(*_Name));
}
