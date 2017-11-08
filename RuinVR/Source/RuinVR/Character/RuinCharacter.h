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
	// ���������Ķ����ʼ������FObjectInitializer��
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
	static const FName MeshCollisionProfileName;//Mesh����ײԤ������
	static const FName MouthSocketName; // ��͵Ĳ����
	static const FName SpeechComponentName; // �����������
	static const FName PhysicalAnimationComponentName; // �������������
};
