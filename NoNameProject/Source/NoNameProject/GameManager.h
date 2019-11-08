// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NONAMEPROJECT_API UGameManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere, Category = "Objetos") // poder cambiar la variable desde el editor
		TArray<AActor*> itemsInventary;
		AActor item1;
		AActor item2;
		AActor item3;
		AActor item4;
		AActor item5;
		AActor item6;


	void InstanceObject(int _id, FVector _location, FRotator _rotation);
private:
	
	/*
	
	itemsInventario[].
	
	*/
	//
	/*
	
	Grabber player;
	player = GameObject.Find("Player").GetComponent<Grabber>();


	
	
	*/

		
};
