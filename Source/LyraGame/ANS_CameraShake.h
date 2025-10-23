// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Shakes/LegacyCameraShake.h"

#include "ANS_CameraShake.generated.h"

/**
 * 
 */

UCLASS()
class LYRAGAME_API UANS_CameraShake : public UAnimNotifyState
{
	GENERATED_BODY()

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<ULegacyCameraShake> CameraShake = nullptr;

	UPROPERTY(EditAnywhere)
	float Amplitude = 0.0f;

	UPROPERTY(EditAnywhere)
	float Frequency = 0.0f;

	UPROPERTY(Transient)
	TMap<TObjectPtr<USkeletalMeshComponent>, TObjectPtr<UCameraShakeBase>> CameraShakeInstanceMap;
};
