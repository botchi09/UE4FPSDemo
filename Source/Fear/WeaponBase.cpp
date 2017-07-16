// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponBase.h"
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "ShootOrientation.h"


// Sets default values
UWeaponBase::UWeaponBase()
{
	meshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(FName("WeaponModel"));
	meshComponent->SetSkeletalMesh(Mesh1P);
}

//TODO: Decide whether Weapons will store reference to their owner, or have it passed as function arg
UWeaponBase::UWeaponBase(AFearCharacter* owner)
{
	owner = owner;
	UWeaponBase();
}

void SetOwner(AFearCharacter* owner)
{
	owner = owner;
}

//Called on Mouse1
void UWeaponBase::PrimaryFire()
{
	ShootPrimary();
}

//Called on Mouse2
void UWeaponBase::SecondaryFire()
{
}

void UWeaponBase::ShootPrimary()
{
	/*UWorld* const World = GetWorld();
	if (World != NULL)
	{
			{
			const FRotator SpawnRotation = GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			World->SpawnActor<AFearProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}*/
}

USkeletalMeshComponent* UWeaponBase::GetModel()
{
	return meshComponent;
}

ShootOrientation* UWeaponBase::GetShootOrientation()
{
	ShootOrientation* orientation = owner->GetShootOrientation();
	return orientation;
}

void UWeaponBase::ShootEffects()
{
	// try and play the sound if specified
	if (FireSound != NULL)
	{
		//UGameplayStatics::PlaySoundAtLocation(owner, FireSound, GetShootOrientation()->GetOrigin());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = GetModel()->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

//Reload pressed
void UWeaponBase::Reload()
{
}

