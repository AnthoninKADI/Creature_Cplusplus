#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "DamageType.h"
#include "creature.h"
using namespace std;

class Attack
{
public:
	Attack();
	~Attack();
	//Attack(std::string aLabelName, Weapon mWeapon[1], int aDamagePoints, int aAttackBonus, DamageType damageType);

	std::string aLabelName;
	//Weapon mWeapon[1];
	int aDamagePoints;
	int aAttackBonus;
	DamageType damageType;

	std::string setName();
	std::string setDamageType();
	int getDamagePoint();
	void AttackBonus(int attackBonus);
	void AttackRDM();
	void AttackResolve();
};

