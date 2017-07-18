// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponItem.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/BlueprintFunctionLibrary.h"


// Sets default values
AWeaponItem::AWeaponItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	//TODO: Naturally, we'll want to make this a rectangle later
	UBoxComponent* CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	//USkeletalMeshComponent* ObjectMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));

	AssignWeapon();

}

void AWeaponItem::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	AssignWeapon();
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void AWeaponItem::AssignWeapon()
{
	if (GiveWeapon != nullptr)
	{
		UWeaponBase* weaponBase = GiveWeapon->GetDefaultObject<UWeaponBase>();
		
		Weapon = NewObject<UWeaponBase>(this, weaponBase->StaticClass());


		USkeletalMeshComponent* ObjectMesh = Weapon->GetModel();


		if (ObjectMesh != nullptr)
		{
			ObjectMesh->SetupAttachment(CollisionComp);
			//This won't function unless ObjectMesh exists, I think
			//CollisionComp->BodyInstance.SetCollisionProfileName("ItemPickup");
		}

		
		
		

	}
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

