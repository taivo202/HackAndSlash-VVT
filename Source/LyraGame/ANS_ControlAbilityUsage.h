// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "ANS_ControlAbilityUsage.generated.h"

/**
 * 
 */
UCLASS()
class LYRAGAME_API UANS_ControlAbilityUsage : public UAnimNotifyState
{
	GENERATED_BODY()
	
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);

public:
	UPROPERTY(EditAnywhere, Meta = (Categories = "AbilityTags"))
	FGameplayTagContainer AllowAbilityTags;
};
