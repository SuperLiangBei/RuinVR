// Fill out your copyright notice in the Description page of Project Settings.

#include "RuinBlueprintFunctionLibrary.h"
#include "RuinVR.h"
#include "RuinGameMode.h"



ARuinGameMode* URuinBlueprintFunctionLibrary::GetRuinGameMode(UObject* WorldContextObject)
{
	return Cast<ARuinGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
}

