// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
*
*/
class FEAR_API FInventoryController
{
public:
	FInventoryController();
	~FInventoryController();

	//Source of the bugs. What the heck?
	FInventoryModel* InventoryModel;
	/*
	void AddWeapon(AWeaponItem* weapon);

	//Called when user presses Drop key.
	void DropSelectedWeapon();
	*/
	/*
	* User weapon interaction will *always* be through array index (e.g. mwheel, pressing 1/2/3)
	* Equips this weapon to the user's hands and sets the desired index
	*/
	/*void SetWeapon(int index);

	void SelectNextWeapon();
	void SelectPrevWeapon();

	AWeaponItem* GetSelectedWeapon();*/

private:
	int selectedIndex = 0;

};
