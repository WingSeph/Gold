// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaunchArea.generated.h"

UCLASS()
class VERTICALSLICE_API ALaunchArea : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALaunchArea();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float testint = 1.0f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void LaunchPlayer();
};
