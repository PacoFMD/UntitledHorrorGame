// Fill out your copyright notice in the Description page of Project Settings.


#include "Waypoint.h"
#include "AI_Bot_Character.h"

// Sets default values
AWaypoint::AWaypoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(Root);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
	BoxComponent->SetupAttachment(GetRootComponent());
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AWaypoint::OnPlayerEnter);

	bIsCounting = false;
	timeToWait = 3.0f;
	currentCounter = 0.0f;
}

// Called when the game starts or when spawned
void AWaypoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWaypoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsCounting)
	{
		if (currentCounter >= timeToWait)
		{
			AAI_Bot_Character* Character = nullptr;
			Character = Cast<AAI_Bot_Character>(otherActor);
			if (Character != nullptr)
			{
				Character->NextWaypoint = NextWaypoint;
				currentCounter = 0.0f;
				bIsCounting = false;
			}
		}
		else
		{
			currentCounter += DeltaTime;
		}
	}
}

void AWaypoint::OnPlayerEnter(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AAI_Bot_Character* Character = nullptr;
	if (OtherActor != nullptr)
	{
		Character = Cast<AAI_Bot_Character>(OtherActor);
		if (Character != nullptr)
		{
			otherActor = OtherActor;
			bIsCounting = true;
		}
	}
}

