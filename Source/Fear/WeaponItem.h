// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "WeaponItem.generated.h"

UCLASS(config = Game)
class FEAR_API AWeaponItem : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Item")
	class UBoxComponent* CollisionComp;


	UPROPERTY(VisibleDefaultsOnly, Category = "Weapon Item")
	USkeletalMeshComponent* ObjectMesh;

	UPROPERTY(EditAnywhere, Category = "Weapon Item")
	TSubclassOf<UWeaponBase> GiveWeapon;
	/*
	
0XFEDE - Today at 12:49 AM
in general if your tsbuclassof is about giving the editor user the choice of creating an object
(at runtime for instance) based off their class choice, 
you need one more property that is a pointer to a UWeaponBase 
and then when you deem necessary, based off the the TSubclass, you create the object and put it in the other property*/
private:

	//UPROPERTY(BlueprintReadOnly, Category = "Weapon Item")
	UWeaponBase* Weapon;

	
public:	
	// Sets default values for this actor's properties
	AWeaponItem();


protected:
	void AssignWeapon();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void PostEditChangeProperty(FPropertyChangedEvent & e);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
