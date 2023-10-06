#pragma once
#include <iostream>

using namespace std;

enum class Weapon {
	Bow,
	Dagger,
	Staff,
	Sword,
};

static string WeaponToStr(Weapon weapon) {
	switch (weapon) {
	case Weapon::Bow:
		return "Bow";
	case Weapon::Dagger:
		return "Dagger";
	case Weapon::Staff:
		return "Staff";
	case Weapon::Sword:
		return "Sword";
	}

}


