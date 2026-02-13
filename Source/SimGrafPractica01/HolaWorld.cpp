// Fill out your copyright notice in the Description page of Project Settings.


#include "HolaWorld.h"
#include "Engine/Engine.h"

// Sets default values
AHolaWorld::AHolaWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHolaWorld::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello World"));

	}
	
}

// Called every frame
void AHolaWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

