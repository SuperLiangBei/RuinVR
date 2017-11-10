// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuinBlueprintFunctionLibrary.generated.h"

class RuinGameMode;

/**
 * 
 */
UCLASS()
class RUINVR_API URuinBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/** ·µ»ØÓÎÏ·µÄGameMode */
	UFUNCTION(BlueprintPure, Category = "Ruin", meta = (WorldContext = "WorldContextObject"))
	static ARuinGameMode* GetRuinGameMode(UObject* WorldContextObject);
	
	
};
