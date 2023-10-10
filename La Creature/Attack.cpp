#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "creature.h"
#include "DamageType.h"
#include "Weapon.h"
#include "Attack.h"
using namespace std;

Attack::Attack() 
{
	aLabelName = "";
	aDamagePoints = 1;
	aAttackBonus = 1;
	DamageType::Default;
}

Attack::Attack(std::string name, Weapon weapon[1], int damagePoints, int attackBonus, DamageType damageType)
{
	aLabelName = name;
	aDamagePoints = damagePoints;
	aAttackBonus = attackBonus;
	DamageType::Default;
}

Attack::~Attack() {}

std::string Attack::setName()
{
	return aLabelName;
}

std::string Attack::setDamageType()
{
	return;
}

int Attack::getDamagePoint()
{
	return aDamagePoints;
}

void Attack::AttackDamage(int attackBonus, int attackRDM, int attackdamage)
{
	srand(time(0));
	int randomAttackBonus = rand() % 5 + 1;
	attackBonus = randomAttackBonus;

	srand(time(0));
	int randomNumber = rand() % 20 + 1;
	attackRDM = randomNumber;

	attackdamage = attackBonus + attackRDM;
	return attackdamage;
}


