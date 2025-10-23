// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS_ControlAbilityUsage.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "LyraGameplayTags.h"
#include "Character/LyraHeroComponent.h"
#include "Character/LyraCharacter.h"
#include "Animation/AnimMontage.h"
#include "Components/SkeletalMeshComponent.h"

void UANS_ControlAbilityUsage::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	if (!MeshComp)
	{
		return;
	}

	AActor* Actor = MeshComp->GetOwner();
	if (!Actor)
	{
		return;
	}

	ULyraHeroComponent* ControlComponent = Actor->FindComponentByClass<ULyraHeroComponent>();
	if (!ControlComponent)
	{
		return;
	}

	FGameplayTagContainer TagContainer;

	TagContainer.AppendTags(AllowAbilityTags);
	ControlComponent->AddExtraAllowedTags(TagContainer);
}

void UANS_ControlAbilityUsage::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	if (!MeshComp)
	{
		return;
	}
	AActor* Actor = MeshComp->GetOwner();
	if (!Actor)
	{
		return;
	}

	ULyraHeroComponent* ControlComponent = Actor->FindComponentByClass<ULyraHeroComponent>();
	if (!ControlComponent)
	{
		return;
	}

	FGameplayTagContainer TagContainer;

	TagContainer.AppendTags(AllowAbilityTags);
	ControlComponent->RemoveExtraAllowedTags(TagContainer);
}