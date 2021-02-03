// Fill out your copyright notice in the Description page of Project Settings.


#include "RectanglePawn.h"

// Sets default values
ARectanglePawn::ARectanglePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARectanglePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARectanglePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalOffset(*direction * moveSpeed * DeltaTime);
}

// Called to bind functionality to input
void ARectanglePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Horizontal", this, &ARectanglePawn::HorizontalAxis);
	PlayerInputComponent->BindAxis("Vertical", this, &ARectanglePawn::VerticalAxis);
}

void ARectanglePawn::HorizontalAxis(float value)
{
	direction->Y = value;
}

void ARectanglePawn::VerticalAxis(float value)
{
	direction->X = value;
}