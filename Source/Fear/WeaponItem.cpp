// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponItem.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"

// Sets default values
AWeaponItem::AWeaponItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	//TODO: Naturally, we'll want to make this a rectangle later
	UBoxComponent* CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

}

// Called when the game starts or when spawned
void AWeaponItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

