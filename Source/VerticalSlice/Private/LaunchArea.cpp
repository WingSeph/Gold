// Fill out your copyright notice in the Description page of Project Settings.

#include "LaunchArea.h"

// Sets default values
ALaunchArea::ALaunchArea()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALaunchArea::BeginPlay()
{
	Super::BeginPlay();
	LaunchPlayer();
}

// Called every frame
void ALaunchArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALaunchArea::LaunchPlayer()
{
	printf("hi");
}