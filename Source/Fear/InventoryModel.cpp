// Fill out your copyright notice in the Description page of Project Settings.AWeaponItem

#include "InventoryModel.h"

FInventoryModel::FInventoryModel()
{
}

FInventoryModel::~FInventoryModel()
{
}


AWeaponItem* FInventoryModel::GetWeapon(int slot)
{
	if (inventory.IsValidIndex(slot))
	{
		return inventory[slot];
	}
	return nullptr;
}

void FInventoryModel::AddWeapon(AWeaponItem *weapon)
{
	inventory.Add(weapon);
}

AWeaponItem* FInventoryModel::RemoveWeapon(int index)
{
	return nullptr;
}

int FInventoryModel::InventorySpace()
{
	return maxInventory - inventory.Num();
}

int FInventoryModel::InventoryFilled()
{
	return inventory.Num();
}

int FInventoryModel::GetMaxInventory()
{
	return maxInventory;
}

