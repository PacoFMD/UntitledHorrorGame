// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OtherDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NONAMEPROJECT_API UOtherDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	 UOtherDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	class AActor* MyDoor = nullptr;
	AActor* ThePlayer = nullptr;
	UPROPERTY(EditAnywhere, Category = "Defaults") // poder cambiar la variable desde el editor
	//UPROPERTY(VisibleAnywhere, Category = "Defaults"); //ver el valor de la variables desde el editor, sin editarlas
	class ATriggerVolume* MyTrigger = nullptr;

};
