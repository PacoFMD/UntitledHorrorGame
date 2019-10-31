// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NONAMEPROJECT_API AItem : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AItem();

public:	
	int GetItemId();

private:
	UPROPERTY(EditAnywhere, Category = "Defaults") // poder cambiar la variable desde el editor
	int id = 0;

		
};
