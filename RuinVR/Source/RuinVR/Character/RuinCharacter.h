// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RuinCharacter.generated.h"

UCLASS()
class RUINVR_API ARuinCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// 设置这个类的对象初始化器“FObjectInitializer”
	ARuinCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
protected:
	static const FName MeshCollisionProfileName;//Mesh的碰撞预设名称
	static const FName MouthSocketName; // 嘴巴的插槽名
	static const FName SpeechComponentName; // 语音组件名称
	static const FName PhysicalAnimationComponentName; // 物理动画组件名称
};
