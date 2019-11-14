#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitchPushButton.generated.h"

class UPointLightComponent;
class USphereComponent;

UCLASS()
class NONAMEPROJECT_API ALightSwitchPushButton : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALightSwitchPushButton();

	// declare point light comp
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
		class UPointLightComponent* PointLight;

	// declare sphere comp
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
		class USphereComponent* LightSphere;

	// declare light intensity variable
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
		float LightIntensity;

	// declare ToggleLight function
	UFUNCTION(BlueprintCallable, Category = "Light Switch")
		void ToggleLight();
};