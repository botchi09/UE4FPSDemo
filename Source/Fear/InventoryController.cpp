// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryController.h"
#include "WeaponItem.h"
#include "InventoryModel.h"


FInventoryController::FInventoryController()
{
	//InventoryModel = new FInventoryModel();
}

FInventoryController::~FInventoryController()
{
}
/*
void FInventoryController::AddWeapon(AWeaponItem* weapon)
{
	InventoryModel.AddWeapon(weapon);
}

void FInventoryController::DropSelectedWeapon()
{
	InventoryModel.RemoveWeapon(selectedIndex);
}

void FInventoryController::SetWeapon(int index)
{
	AWeaponItem* currentWeapon = InventoryModel.GetWeapon(index);
}

void FInventoryController::SelectNextWeapon()
{
	selectedIndex++;
	//We could use a modulo operation to loop around, but this method is safer and faster
	if (selectedIndex <= InventoryModel.InventoryFilled())
	{
		selectedIndex = 0;
	}
	SetWeapon(selectedIndex);
}

void FInventoryController::SelectPrevWeapon()
{
	selectedIndex++;
	if (selectedIndex < 0)
	{
		selectedIndex = InventoryModel.InventoryFilled() - 1;
	}
	SetWeapon(selectedIndex);
}*/
/*
AWeaponItem* FInventoryController::GetSelectedWeapon()
{
	return InventoryModel.GetWeapon(selectedIndex);
}*/
