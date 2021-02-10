// Fill out your copyright notice in the Description page of Project Settings.


#include "CTopDown.h"

// Sets default values
ACTopDown::ACTopDown()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACTopDown::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACTopDown::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddMovementInput(*direction * moveSpeed * DeltaTime);
	SetActorRotation(FRotationMatrix::MakeFromX(directionSafe->GetSafeNormal()).Rotator());
}

// Called to bind functionality to input
void ACTopDown::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Horizontal", this, &ACTopDown::HorizontalAxis);
	PlayerInputComponent->BindAxis("Vertical", this, &ACTopDown::VerticalAxis);
}

void ACTopDown::HorizontalAxis(float value)
{
	direction->Y = value;
	if (direction -> Size() != 0.0f) {
		directionSafe->Y = value;
	}
}

void ACTopDown::VerticalAxis(float value)
{
	direction->X = value;
	if (direction->Size() != 0.0f) {
		directionSafe->X = value;
	}
}

