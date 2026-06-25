// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTemporaryActor.h"

// Sets default values
AMyTemporaryActor::AMyTemporaryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTemporaryActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTemporaryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

