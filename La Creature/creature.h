#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "DamageType.h"
#include "Monster.h"
using namespace std;

class creature
{
private:
	std::string cName;
	std::string cDescription;
	int cHP;
	vector<DamageType> cDamageType;
	vector<MonsterType> cMonsterType;
	int cDefense;

public:
	creature();
	~creature();
	creature(std::string cName, std::string cDescription, int cHP, vector<DamageType> cDamageType, vector<MonsterType> cMonsterType, int cDefense);

	std::string setCreatureName();
	std::string setDamageType();
	std::string setMonsterType();
	int getHP();
	int setHP(int cHP);
	int setDefense(int cDefense);
	void Attack();
	void Heal();
};

