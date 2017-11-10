// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "RuinGameMode.generated.h"


/** VR头盔出现错误枚举 */
UENUM(BlueprintType)
enum class ERuinVRError : uint8
{
	None,
	LostStereo,
	LostFocus,
	LostControllers,
	LostTracker,
	MAX
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameUnpausedDelegate);



/**
 * 
 */
UCLASS()
class RUINVR_API ARuinGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	/** Fired when the game is unpaused. */
	UPROPERTY(BlueprintAssignable, Category = "Odin")
	FOnGameUnpausedDelegate OnGameUnpaused;
	
	
};
