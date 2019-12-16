// Fill out your copyright notice in the Description page of Project Settings.


#include "Linterna.h"

// Sets default values for this component's properties
ULinterna::ULinterna()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULinterna::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
	
}


// Called every frame
void ULinterna::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	/*
	if (!works)
	{
		works = false;
		th = new Thread(recharge);
		th.Start();
	}
	if (life >= maxLife)
	{
		if (th != null)
		{
			th.Abort();
		}
	}
	*/
}


bool ULinterna::turnOn()
{
	/*
	if (this.life > 0)
	{
		this.works = true;
		th2 = new Thread(drainPower);
		th2.Start();
		if (th != null)
		{
			th.Abort();
		}
		return true;
	}
	else
	{
		this.works = false;
		return false;
	}

	*/
	return true;
}


bool ULinterna::turnOff()
{

	/* this.works = false;
            if (th2 != null)
            {
                th2.Abort();
            }
            return true;*/
	return true;
}

void ULinterna::recharge()
{
	/*if (dead)
            {
                dropDead();
            }
            while (this.life < maxLife)
            {
                this.life++;
                Thread.Sleep(2000);
            }*/

}

void ULinterna::drainPower()
{
	/*while (this.life > 0)
            {
                this.life--;
                if (this.life <= 0)
                {
                    dead = true;
                }
                Thread.Sleep(2000);
            }

            this.works = false;*/

}

void ULinterna::dropDead()
{
	/* int x = 0;
            while(x < 5)
            {
                x++;
                Thread.Sleep(1000);
            }
            dead = false;
        }*/

}
