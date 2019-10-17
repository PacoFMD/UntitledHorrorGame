// Fill out your copyright notice in the Description page of Project Settings.


#include "OtherDoor.h"
#include "Engine/TriggerVolume.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UOtherDoor::UOtherDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOtherDoor::BeginPlay()
{
	Super::BeginPlay();
	MyDoor = GetOwner();
	if (!MyDoor) {
		UE_LOG(LogTemp,Error,TEXT("No se encontro"));
	}
	ThePlayer = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!ThePlayer) {
		UE_LOG(LogTemp, Error, TEXT("Player no se encontro"));
	}
	// ...
	
}


// Called every frame
void UOtherDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	 
	if (MyTrigger->IsOverlappingActor(ThePlayer)) {
		/*FRotator NewRotation = FRotator(0.0f, 60.0f, 0.0f);
		MyDoor->SetActorRotation(NewRotation);*/

		FRotator NewRotation2(0.0f, 60.0f, 0.0f);

		MyDoor->SetActorRotation(FMath::Lerp(MyDoor->GetActorRotation(), NewRotation2, DeltaTime));
		//MyDoor->Set(FMath::Lerp(FQuat(MyDoor->SetActorRelativeRotation), FQuat(FRotator(0.0f, 60.0f, 0.0f)), 0.01f));
	}
	else{
		FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f);
		//MyDoor->SetActorRotation(NewRotation);
		MyDoor->SetActorRotation(FMath::Lerp(MyDoor->GetActorRotation(), NewRotation, DeltaTime));

	}
	

	

	

	
	
	// ...
}

