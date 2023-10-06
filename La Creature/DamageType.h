#pragma once
#include <iostream>

using namespace std;

enum class DamageType {
	Default,
	Bludgeoning,
	Slashing,
	Piercing,
	Burning,
};

static string DamageToStr(DamageType damageType) {
	switch (damageType) {
	case DamageType::Bludgeoning:
		return "Bludgeoning";
	case DamageType::Slashing:
		return "Slashing";
	case DamageType::Piercing:
		return "Piercing";
	case DamageType::Burning:
		return "Burning";
	default:
		return "Default";
	}

}