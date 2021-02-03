// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MrCube.generated.h"

UCLASS()
class UNREALBASICS_API AMrCube : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere) float moveSpeed{ 100.0f };
	UPROPERTY(EditAnywhere) FVector direction{};

public:	
	// Sets default values for this actor's properties
	AMrCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
