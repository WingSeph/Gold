// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractiveObject_CPP.h"

// Sets default values
AInteractiveObject_CPP::AInteractiveObject_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractiveObject_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractiveObject_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

