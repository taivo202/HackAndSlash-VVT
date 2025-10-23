// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraAbilitySystemGlobals.h"

#include "LyraGameplayEffectContext.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraAbilitySystemGlobals)

struct FGameplayEffectContext;

ULyraAbilitySystemGlobals::ULyraAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FGameplayEffectContext* ULyraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FLyraGameplayEffectContext();
}

UAbilitySystemComponent* ULyraAbilitySystemGlobals::GetAbilitySystemComponent(const UObject* WorldContextObject, bool LookForComponent)
{
	const UActorComponent* ActorComponent = Cast<UActorComponent>(WorldContextObject);
	if (ActorComponent)
	{
		return GetAbilitySystemComponentFromActor(ActorComponent->GetOwner(), LookForComponent);
	}

	return GetAbilitySystemComponentFromActor(Cast<AActor>(WorldContextObject), LookForComponent);
}

