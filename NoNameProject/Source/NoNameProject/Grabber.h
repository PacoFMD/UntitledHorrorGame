// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NONAMEPROJECT_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	class UPhysicsHandleComponent* MyHandle = nullptr;

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> SpawnableActor = nullptr;


	virtual void BeginPlay() override;

	void Grab();

	void Release();

	void ShowInvetory();

	FHitResult GetFirstPhysicsBodyInReach();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetInputComponent();
private:
	UPROPERTY(EditAnywhere, Category = "Defaults") // poder cambiar la variable desde el editor
		float distancia = 1000.0f;
	bool AddToList = true;
	TArray<int> inventario;
	//List<int> inventario = new List<int>();
};
