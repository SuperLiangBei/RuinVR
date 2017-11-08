// Fill out your copyright notice in the Description page of Project Settings.

#include "RuinCharacter.h"
#include "RuinVR.h"
#include "Character/RuinCharacterMovementComponent.h"



const FName ARuinCharacter::MeshCollisionProfileName(TEXT("CharacterMesh"));

// 初始化类，设置基本参数
ARuinCharacter::ARuinCharacter(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<URuinCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	/** Mesh初始化设置 */
	GetMesh()->SetCollisionProfileName(ARuinCharacter::MeshCollisionProfileName);
	GetMesh()->bSingleSampleShadowFromStationaryLights = true;//整个组件是否应该像静止灯一样被遮住，这使得阴影接收更便宜。当启用阴影数据来自Lightmass预先计算的体积光照样本，这些样本非常稀疏。目前这只适用于固定方向灯
	GetMesh()->bGenerateOverlapEvents = false;//关闭重叠事件
	GetMesh()->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::AlwaysTickPoseAndRefreshBones; //总是勾选并刷新BoneTransforms
	GetMesh()->bApplyImpulseOnDamage = false;

	/** Capsule初始化设置 */


	//关闭“无论我们是否总是在走路时强制对固定角色的地板检查"
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

