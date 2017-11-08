// Fill out your copyright notice in the Description page of Project Settings.

#include "RuinCharacter.h"
#include "RuinVR.h"
#include "Character/RuinCharacterMovementComponent.h"



const FName ARuinCharacter::MeshCollisionProfileName(TEXT("CharacterMesh"));

// ��ʼ���࣬���û�������
ARuinCharacter::ARuinCharacter(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<URuinCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	/** Mesh��ʼ������ */
	GetMesh()->SetCollisionProfileName(ARuinCharacter::MeshCollisionProfileName);
	GetMesh()->bSingleSampleShadowFromStationaryLights = true;//��������Ƿ�Ӧ����ֹ��һ������ס����ʹ����Ӱ���ո����ˡ���������Ӱ��������LightmassԤ�ȼ�������������������Щ�����ǳ�ϡ�衣Ŀǰ��ֻ�����ڹ̶������
	GetMesh()->bGenerateOverlapEvents = false;//�ر��ص��¼�
	GetMesh()->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::AlwaysTickPoseAndRefreshBones; //���ǹ�ѡ��ˢ��BoneTransforms
	GetMesh()->bApplyImpulseOnDamage = false;

	/** Capsule��ʼ������ */


	//�رա����������Ƿ���������·ʱǿ�ƶԹ̶���ɫ�ĵذ���"
	GetCharacterMovement()->bAlwaysCheckFloor = false;

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARuinCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARuinCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARuinCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

