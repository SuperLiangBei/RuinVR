// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RuinInteractionComponent.generated.h"


UCLASS( ClassGroup=("RuinInteraction"),BlueprintType, Blueprintable, hideCategories = (Collision, Sockets), meta=(BlueprintSpawnableComponent) )
class RUINVR_API URuinInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URuinInteractionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
