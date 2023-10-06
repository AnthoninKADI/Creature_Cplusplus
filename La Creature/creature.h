#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "DamageType.h"
using namespace std;

class creature
{
private:
	std::string cName;
	std::string cDescription;
	int cHP;
	vector<DamageType> cDamageType;
	int cDefense;

public:
	creature();
	~creature();
	creature(std::string cName, std::string cDescription, int cHP, vector<DamageType> cDamageType, int cDefense);

	std::string setCreatureName();
	std::string setDamageType();
	int getHP();
	int setHP(int cHP);
	int setDefense(int cDefense);
	void Attack();
	void Heal();
};

