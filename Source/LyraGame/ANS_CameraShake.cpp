// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS_CameraShake.h"
#include "Camera/CameraModifier_CameraShake.h"
#include "Camera/LyraPlayerCameraManager.h"
#include "Character/LyraCharacter.h"
#include "Player/LyraPlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/CameraShakeBase.h"
#include "Components/SkeletalMeshComponent.h"


void UANS_CameraShake::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (CameraShake == nullptr)
	{
		return;
	}

	ALyraCharacter* Character = Cast<ALyraCharacter>(MeshComp->GetOwner());
	if (Character == nullptr)
	{
		return;
	}

	if (Character->IsLocallyControlled() == false)
	{
		return;
	}

	ALyraPlayerController* PlayerController = Character->GetLyraPlayerController();
	if (PlayerController == nullptr)
	{
		return;
	}

	ALyraPlayerCameraManager* PlayerCameraManager = Cast<ALyraPlayerCameraManager>(PlayerController->PlayerCameraManager);
	if (PlayerCameraManager == nullptr)
	{
		return;
	}

	FAddCameraShakeParams Params;
	Params.Initializer.BindLambda([&](UCameraShakeBase* CameraShake)
		{
			ULegacyCameraShake* LegacyCameraShake = Cast<ULegacyCameraShake>(CameraShake);
			LegacyCameraShake->OscillationDuration = -1; //Infinity

			LegacyCameraShake->LocOscillation.X.Amplitude *= Amplitude;
			LegacyCameraShake->LocOscillation.X.Frequency *= Frequency;

			LegacyCameraShake->LocOscillation.Y.Amplitude *= Amplitude;
			LegacyCameraShake->LocOscillation.Y.Frequency *= Frequency;

			LegacyCameraShake->LocOscillation.Z.Amplitude *= Amplitude;
			LegacyCameraShake->LocOscillation.Z.Frequency *= Frequency;
		});

	TObjectPtr<UCameraShakeBase> CameraShakeInstance = PlayerCameraManager->StartCameraShake(CameraShake, Params);
	CameraShakeInstanceMap.Add(MeshComp, CameraShakeInstance);
}

void UANS_CameraShake::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (CameraShake.Get() == nullptr)
	{
		return;
	}

	ALyraCharacter* Character = Cast<ALyraCharacter>(MeshComp->GetOwner());
	if (Character == nullptr)
	{
		return;
	}

	if (Character->IsLocallyControlled() == false)
	{
		return;
	}

	ALyraPlayerController* PlayerController = Character->GetLyraPlayerController();
	if (PlayerController == nullptr)
	{
		return;
	}

	ALyraPlayerCameraManager* PlayerCameraManager = Cast<ALyraPlayerCameraManager>(PlayerController->PlayerCameraManager);
	if (PlayerCameraManager == nullptr)
	{
		return;
	}

	TObjectPtr<UCameraShakeBase>* FoundCameraShakeInstance = CameraShakeInstanceMap.Find(MeshComp);

	if (FoundCameraShakeInstance == nullptr)
	{
		return;
	}

	TObjectPtr<UCameraShakeBase> CameraShakeInstance = *FoundCameraShakeInstance;
	PlayerCameraManager->StopCameraShake(CameraShakeInstance);

	CameraShakeInstanceMap.Remove(MeshComp);
}
