// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Components/StaticMeshComponent.h"
#include "WeaponItem.generated.h"

UCLASS(config = Game)
class FEAR_API AWeaponItem : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Item")
	class UBoxComponent* CollisionComp;


	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Item")
	UStaticMeshComponent* ObjectMesh;

	UPROPERTY(EditAnywhere, Category = "Weapon Item")
	TSubclassOf<UWeaponBase> GiveWeapon;

	

	
public:	
	// Sets default values for this actor's properties
	AWeaponItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
