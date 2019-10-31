// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Public/DrawDebugHelpers.h"
#include "Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
#include "Classes/Components/PrimitiveComponent.h"
#include "Classes/Components/InputComponent.h"
#include "NoNameProject/Item.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}



// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	MyHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	FActorSpawnParameters MyParamas;
	MyParamas.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AActor* MyNewActor = GetWorld()->SpawnActor<AActor>(SpawnableActor, GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
	GetInputComponent();
}

void UGrabber::Grab() {
	UE_LOG(LogTemp, Warning, TEXT("Grabbing a mango"));
	FHitResult MyResult = GetFirstPhysicsBodyInReach();
	AActor* PotentialActor = Cast<AItem>(MyResult.GetActor());// Cast para acceder a un objeto y su escript
	if (PotentialActor) {
		UE_LOG(LogTemp, Warning, TEXT("%s"), *PotentialActor->GetName());
		UPrimitiveComponent* ComponentToGrab = MyResult.GetComponent();
		MyHandle->GrabComponent(ComponentToGrab, NAME_None, ComponentToGrab->GetOwner()->GetActorLocation(), true);
		inventario.Add(PotentialActor->GetItemId());
	}
}

void UGrabber::Release() {
	UE_LOG(LogTemp, Warning, TEXT("Releasing a mango"));
	if (MyHandle) {
		MyHandle->ReleaseComponent();
	}
}

void UGrabber::GetInputComponent() {
	auto MyInput = GetOwner()->FindComponentByClass<UInputComponent>();
	UE_LOG(LogTemp, Warning, TEXT("Antes del If"));
	if (MyInput) {
		UE_LOG(LogTemp, Warning, TEXT("En el if del mango"));
		MyInput->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		MyInput->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not a mango"));
	}
}



// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!MyHandle) {

		return;
	}
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);
	FVector EndLine = PlayerViewPointLocation + (PlayerViewPointRotation.Vector()*300);
	if (MyHandle->GrabbedComponent) {
		UE_LOG(LogTemp, Warning, TEXT("Agarrando el mango"));
		MyHandle->SetTargetLocation(EndLine);
	}
}

FHitResult UGrabber::GetFirstPhysicsBodyInReach() {
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

	FVector EndLine = PlayerViewPointLocation + (PlayerViewPointRotation.Vector()*300);

	DrawDebugLine(GetWorld(),
		PlayerViewPointLocation,
		EndLine,
		FColor(255, 0, 0),
		false,
		0.0f,
		0.0f,
		10.0f
	);
	FHitResult Hit;
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(
		Hit,
		PlayerViewPointLocation,
		EndLine,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParameters
	);

	return Hit;
	/*if (Hit.GetActor()) {
		//MyHandle
		Hit.GetActor()->SetActorLocation(EndLine);
		UE_LOG(LogTemp, Warning, TEXT("Actorn Name: %s"), *Hit.GetActor()->GetName());
	}*/
	// ...
}

