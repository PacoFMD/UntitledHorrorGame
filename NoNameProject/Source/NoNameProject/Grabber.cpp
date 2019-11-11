// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Public/DrawDebugHelpers.h"
#include "Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
#include "Classes/Components/PrimitiveComponent.h"
#include "Classes/Components/InputComponent.h"
#include "NoNameProject/Item.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "GameManager.h"
#include "ItemActor.h"

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
	GetInputComponent();

	FActorSpawnParameters MyParamas;
	MyParamas.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AActor* MyNewActor = GetWorld()->SpawnActor<AActor>(SpawnableActor, GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	/*if (!MyHandle) {

		return;
	}*/
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);
	FVector EndLine = PlayerViewPointLocation + (PlayerViewPointRotation.Vector()*300);
	if (MyHandle->GrabbedComponent) {
		UE_LOG(LogTemp, Warning, TEXT("Agarrando el mango"));
		MyHandle->SetTargetLocation(EndLine);
	}
}

void UGrabber::GetInputComponent() {
	auto MyInput = GetOwner()->FindComponentByClass<UInputComponent>();

	if (MyInput) {

		MyInput->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		MyInput->BindAction("GrabItem", IE_Pressed, this, &UGrabber::GrabItem);
		MyInput->BindAction("Grab", IE_Released, this, &UGrabber::Release);
		MyInput->BindAction("InventoryKey_I", IE_Pressed, this, &UGrabber::ShowInvetory);//itemKey_B
		MyInput->BindAction("itemKey_1", IE_Pressed, this, &UGrabber::SpawnItem1);//itemKey_1
		MyInput->BindAction("itemKey_2", IE_Pressed, this, &UGrabber::SpawnItem2);//itemKey_1
		MyInput->BindAction("itemKey_3", IE_Pressed, this, &UGrabber::SpawnItem3);//itemKey_1
		MyInput->BindAction("itemKey_4", IE_Pressed, this, &UGrabber::SpawnItem4);//itemKey_1
		MyInput->BindAction("itemKey_5", IE_Pressed, this, &UGrabber::SpawnItem5);//itemKey_1
		MyInput->BindAction("itemKey_6", IE_Pressed, this, &UGrabber::SpawnItem6);//itemKey_1

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not a mango"));
	}
}

void UGrabber::Grab() {
	UE_LOG(LogTemp, Warning, TEXT("Grabbing a mango"));
	FHitResult MyResult = GetFirstPhysicsBodyInReach();
	AActor* PotentialActor = MyResult.GetActor();
	if (!PotentialActor) {
		UE_LOG(LogTemp, Warning, TEXT("No encontre actor"));
		return;
	}
	/*
	TArray<UItemClass*> PotentialItems;
	PotentialActor->GetComponents(PotentialItems);
	if (PotentialItems.Num() > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Grabbing a mango"));
	}*/

	//UItemClass* itemActor = Cast<UItemClass>(PotentialActor);// Cast para acceder a un objeto y su script
	//UItemActor* itemActor = PotentialActor->FindComponentByClass<UItemActor>();

	//UE_LOG(LogTemp, Warning, TEXT("Potential Actor %s"), *PotentialActor->GetName());
	/*
	if (itemActor) {
		UE_LOG(LogTemp, Warning, TEXT("%s"), *PotentialActor->GetName());
		UPrimitiveComponent* ComponentToGrab = MyResult.GetComponent();
		MyHandle->GrabComponent(ComponentToGrab, NAME_None, ComponentToGrab->GetOwner()->GetActorLocation(), true);
		if (AddToList) {
			inventario.Add(itemActor->GetItemId());
			AddToList = false;
		}
		//UE_LOG(LogTemp, Warning, TEXT("Inventario %i Item: %i"),inventario.Num(), PotentialActor->GetItemId());
	}
	*/
}

void UGrabber::GrabItem() {
	UE_LOG(LogTemp, Warning, TEXT("Grabbing a mango"));
	FHitResult MyResult = GetFirstPhysicsBodyInReach();
	AActor* PotentialActor = MyResult.GetActor();
	if (!PotentialActor) {
		UE_LOG(LogTemp, Warning, TEXT("No encontre actor"));
		return;
	}
	UItemActor* itemActor = PotentialActor->FindComponentByClass<UItemActor>();

	if (itemActor) {
		UE_LOG(LogTemp, Warning, TEXT("%s"), *PotentialActor->GetName());
		UPrimitiveComponent* ComponentToGrab = MyResult.GetComponent();
		MyHandle->GrabComponent(ComponentToGrab, NAME_None, ComponentToGrab->GetOwner()->GetActorLocation(), true);
		if (AddToList) {
			inventario.Add(itemActor->GetItemId());
			AddToList = false;
		}
	}

	PotentialActor->Destroy();

}



void UGrabber::Release() {
	UE_LOG(LogTemp, Warning, TEXT("Releasing a mango"));
	AddToList = true;
	if (MyHandle) {
		MyHandle->ReleaseComponent();
	}
}


void UGrabber::ShowInvetory() {
	UE_LOG(LogTemp, Warning, TEXT("En el key I"));
	if (inventario.Num() <= 0) {
		UE_LOG(LogTemp, Warning, TEXT("No hay inventario"));
	}
	else {
		for (int i = 0; i < inventario.Num(); i++) {
			UE_LOG(LogTemp, Warning, TEXT("Esta el objeto con su id: %i"), inventario[i]);
		}
		
		
	}
}

bool UGrabber::HaveItem(int _id) {
	if (inventario.Find(_id)) {
		return true;
	}
	else
	{
		return false;
	}
}

void UGrabber::SpawnItem1() {
	TArray<AActor*> _ptrActr;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), UGameManager::StaticClass(), _ptrActr);
	UGameManager* _ptrGameManager = Cast<UGameManager>(_ptrActr[0]);

	if (inventario.Find(1)) {
		_ptrGameManager->itemsInventary[0];
		TSubclassOf<AActor> spawnable;
		//TSubclassOf<AActor> spawnable = _ptrGameManager->itemsInventary[0]; //MARIOOOO DESCOMENTA ESTE Y COMETA EL DE ARRIBA Y VE QUE PEDO CON EL ERROR
		GetWorld()->SpawnActor<AActor>(spawnable);
	}else
	{
		UE_LOG(LogTemp, Warning, TEXT("No hay objeto en 1"));
	}
	/*for (int i = 0; i < inventario.Num(); i++){
		if (inventario.Find(i) == 1) {

		}
	}*/
	
}

void UGrabber::SpawnItem2() {
	TArray<AActor*> _ptrActr;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), UGameManager::StaticClass(), _ptrActr);
	UGameManager* _ptrGameManager = Cast<UGameManager>(_ptrActr[0]);

}
void UGrabber::SpawnItem3() {

	TArray<AActor*> _ptrActr;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), UGameManager::StaticClass(), _ptrActr);
	UGameManager* _ptrGameManager = Cast<UGameManager>(_ptrActr[0]);
}
void UGrabber::SpawnItem4() {
	TArray<AActor*> _ptrActr;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), UGameManager::StaticClass(), _ptrActr);
	UGameManager* _ptrGameManager = Cast<UGameManager>(_ptrActr[0]);

}
void UGrabber::SpawnItem5() {
	TArray<AActor*> _ptrActr;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), UGameManager::StaticClass(), _ptrActr);
	UGameManager* _ptrGameManager = Cast<UGameManager>(_ptrActr[0]);

}
void UGrabber::SpawnItem6() {
	TArray<AActor*> _ptrActr;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), UGameManager::StaticClass(), _ptrActr);
	UGameManager* _ptrGameManager = Cast<UGameManager>(_ptrActr[0]);

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
	if (Hit.GetActor()) {
		UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *Hit.GetActor()->GetName());
	}

	
	return Hit;
	/*if (Hit.GetActor()) {
		//MyHandle
		Hit.GetActor()->SetActorLocation(EndLine);
		UE_LOG(LogTemp, Warning, TEXT("Actorn Name: %s"), *Hit.GetActor()->GetName());
	}*/
	// ...
}

