// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS_SpawnActor.h"

#include "Character/LyraCharacter.h"
#include "AbilitySystem/LyraAbilitySystemGlobals.h"
#include "Components/SkeletalMeshComponent.h"

void UANS_SpawnActor::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	UAbilitySystemComponent* ASC = ULyraAbilitySystemGlobals::GetAbilitySystemComponent(MeshComp);
	if (!ASC)
	{
		return;
	}

	ALyraCharacter* LyraCharacter = Cast<ALyraCharacter>(MeshComp->GetOwner());
	if (!LyraCharacter)
	{
		return;
	}


	if (SpawnableActorClass == nullptr)
	{
		return;
	}

	FTransform SpawnTransform = LyraCharacter->GetActorTransform();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = LyraCharacter;
	SpawnedActor = LyraCharacter->GetWorld()->SpawnActor<AActor>(SpawnableActorClass, SpawnTransform, SpawnParams);

	SpawnedActor->AttachToComponent(LyraCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false), AttachSocketName);

	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
}

void UANS_SpawnActor::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (SpawnableActorClass == nullptr)
	{
		return;
	}

	ALyraCharacter* LyraCharacter = Cast<ALyraCharacter>(MeshComp->GetOwner());
	if (!LyraCharacter)
	{
		return;
	}

	if (bDestoryOnEnd)
	{
		SpawnedActor->Destroy();
	}
	Super::NotifyEnd(MeshComp, Animation, EventReference);
}