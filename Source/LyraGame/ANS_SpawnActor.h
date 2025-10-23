// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_SpawnActor.generated.h"

/**
 * 
 */
UCLASS()
class LYRAGAME_API UANS_SpawnActor : public UAnimNotifyState
{
	GENERATED_BODY()
	
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

private:
	UPROPERTY(EditInstanceOnly, Category = Ability)
	bool bDestoryOnEnd = false;

	UPROPERTY(EditInstanceOnly, Category = Ability)
	FName AttachSocketName = NAME_None;

	UPROPERTY(EditAnywhere, Category = Ability)
	FVector SpawnOffset;

	UPROPERTY(EditInstanceOnly, Meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> SpawnableActorClass;

private:
	AActor* SpawnedActor = nullptr;
};
