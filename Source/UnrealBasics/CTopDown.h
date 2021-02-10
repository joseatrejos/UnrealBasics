// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CTopDown.generated.h"

UCLASS()
class UNREALBASICS_API ACTopDown : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere) float moveSpeed{ 100.f };
	FVector* direction{ new FVector() };
	FVector* directionSafe{ new FVector() };

	void HorizontalAxis(float value);
	void VerticalAxis(float value);

public:
	// Sets default values for this character's properties
	ACTopDown();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
