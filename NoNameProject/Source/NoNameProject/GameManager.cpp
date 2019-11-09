// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UGameManager::UGameManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGameManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGameManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UGameManager::InstanceObject(int _id, FVector _location, FRotator _rotation)
{
	//itemsInventary* Spawned = GetWorld()->SpawnActor<itemsInventary[1]>(itemsInventary[_id], _location, _rotation);
		//AActor* NewActor = GetWorld()->SpawnActor<AActor>(itemsInventary[_id], _location,_rotation);
		 

		 switch (_id) {
		 case 1:
			 GetWorld()->SpawnActor<AActor>(item1, _location, _rotation);
			 break;
		 case 2:
			 GetWorld()->SpawnActor<AActor>(item2, _location, _rotation);
			 break;
		 case 3:
			 GetWorld()->SpawnActor<AActor>(item3, _location, _rotation);
			 break;
		 case 4:
			 GetWorld()->SpawnActor<AActor>(item4, _location, _rotation);
			 break;
		 case 5:
			 GetWorld()->SpawnActor<AActor>(item5, _location, _rotation);
			 break;
		 case 6:
			 GetWorld()->SpawnActor<AActor>(item6, _location, _rotation);
			 break;

		 }
}

