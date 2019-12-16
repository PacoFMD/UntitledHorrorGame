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
	
	void GrabItem();

	void Release();	

	void ShowInvetory();
	FHitResult GetFirstPhysicsBodyInReach();
	void SpawnItem1();
	void SpawnItem2();
	void SpawnItem3();
	void SpawnItem4();
	void SpawnItem5();
	void SpawnItem6();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetInputComponent();
	bool HaveItem(int _id);
private:
	UPROPERTY(EditAnywhere, Category = "Defaults") // poder cambiar la variable desde el editor
		float distancia = 1000.0f;
	bool AddToList = true;
	TArray<int> inventario;
	UPROPERTY(EditAnywhere, Category = "Objetos a Spawnear") // poder cambiar la variable desde el editor
		TArray<AActor*> objInventario;
	AActor* obj1 = nullptr;
	AActor* obj2 = nullptr;
	AActor* obj3 = nullptr;
	AActor* obj4 = nullptr;
	AActor* obj5 = nullptr;
	AActor* obj6 = nullptr;
	TSubclassOf<AActor> Spawnable;
	/*

	GameManager gm;
	gm = GameObject.Find("GameManager").GetComponent<GameManager>();




	*/
		
};
