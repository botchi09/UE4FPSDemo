// Fill out youUr copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class FEAR_API FInventoryModel
{

public:
	FInventoryModel();
	~FInventoryModel();

	AWeaponItem* GetWeapon(int slot);

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory)
	TArray<AWeaponItem*> inventory;

	void AddWeapon(AWeaponItem* weapon);

	//Since we will only drop active weapon (and always maintain index of such) we can assume every weapon removal request includes an index
	AWeaponItem* RemoveWeapon(int index);

	int InventorySpace();

	int InventoryFilled();

	int GetMaxInventory();

private:
	int maxInventory = 3; //No more than 3 things in scrollable inventory at once
};
