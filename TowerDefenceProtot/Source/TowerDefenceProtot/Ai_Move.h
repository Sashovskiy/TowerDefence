// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIColor.h"
#include "GameFramework/Character.h"
#include "Ai_Move.generated.h"

UCLASS()
class TOWERDEFENCEPROTOT_API AAi_Move : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAi_Move();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//UPROPERTY(EditAnywhere, VisibleAnywhere, Category = "Color")
	//EAiColor ActorColor = EAiColor::AC_White;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
