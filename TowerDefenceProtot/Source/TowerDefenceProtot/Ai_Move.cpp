// Fill out your copyright notice in the Description page of Project Settings.

#include "Ai_Move.h"


// Sets default values
AAi_Move::AAi_Move()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAi_Move::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAi_Move::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAi_Move::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

