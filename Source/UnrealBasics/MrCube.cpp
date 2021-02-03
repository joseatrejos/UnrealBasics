// Fill out your copyright notice in the Description page of Project Settings.


#include "MrCube.h"

// Sets default values
AMrCube::AMrCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMrCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMrCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalOffset(direction * moveSpeed * DeltaTime);
}

