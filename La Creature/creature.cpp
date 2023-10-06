#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "creature.h"
#include "DamageType.h"
using namespace std;

creature::creature() {
	cName = "";
	cDescription = "";
	cHP = 1;
	cDefense = 1;
	cDamageType = { DamageType::Default };
}
creature::creature(std::string name, std::string description, int hp, vector<DamageType> damageType, int defense)
{
	cName = name;
	cDescription = description;
	cHP = hp;
	cDefense = defense;
	cDamageType = damageType;
}
creature::~creature(){}

std::string creature::setCreatureName() 
{
	return cName;
}

std::string creature::setDamageType() 
{
	return ;
}

int creature::getHP()
{
	return cHP;
}

int creature::setHP(int hp)
{
	cHP = hp;
}

int creature::setDefense(int defense)
{
	/*srand(time(0));
	int randomNumber = rand() % 20 + 1;
	defense = randomNumber;
	return defense;*/
}

void creature::Attack()
{

}

void creature::Heal()
{

}







