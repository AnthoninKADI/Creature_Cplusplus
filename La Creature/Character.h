#include <string>
#include "Weapon.h"
#include "DamageType.h"
#include "Attack.h"
#include "Monster.h"
#include "creature.h"

using namespace std;
#pragma once

class Character
{
private:
	std::string characterFirstName;
	std::string characterLastName;
	std::string characterCatchPhrase;
	int characterLifePoint;
	Weapon mWeapon[1];
	MonsterType characterMonster;

public:
	Character();
	~Character();
	Character(std::string firstname, std::string lastname, std::string catchphrase, int lifepoints, Weapon weapon[1], MonsterType monsterRace);

	std::string setName();
	Weapon setWeaponType();
	MonsterType setMonsterType();
	int getHP();
	void setHP(int hp);
	void Attack(Character& character, int number);
};



