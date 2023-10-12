#include <string>
#include "Weapon.h"
#include "DamageType.h"
#include "Attack.h"
#include "Monster.h"
#include "creature.h"
#include "Character.h"

using namespace std;

Character::Character() {
	characterFirstName = "";
	characterLastName = "";
	characterCatchPhrase = "";
	characterLifePoint = 1;
	for (int i = 0; i < 3; i++) {
		mWeapon[i] = Weapon();
	}
	characterMonster = MonsterType::Default;
}

Character::Character(std::string firstname, std::string lastname, std::string catchphrase, int lifepoints, Weapon weapon[1], MonsterType monsterRace) {
	characterFirstName = firstname;
	characterLastName = lastname;
	characterCatchPhrase = catchphrase;
	characterLifePoint = lifepoints;
	for (int i = 0; i < 3; i++) {
		mWeapon[i] = weapon[i];
	}
	characterMonster = monsterRace;
}

Character::~Character() {}

std::string Character::setName() {
	return characterFirstName + " - " + characterLastName;
}


Weapon Character::setWeaponType() {
	return mWeapon[i].setWeaponType();
}

int Character::getHP() {
	return characterLifePoint;
}

void Character::setHP(int hp) {
	characterLifePoint = hp;
}


void Character::Attack(Character& character, int number) {
	/*Weapon& attackWeapon = mWeapon[number];
	if (attackWeapon.setWeaponType() == WeaponType::Default) {
		cout << "You can't attack with this weapon" << endl;
		return;
	}

	character.setHP(character.getHP() - attackWeapon.setWeaponDamages());
	if (character.getHP() < 0) {
		character.setHP(0);
	}

	attackWeapon.setWeaponDurability(attackWeapon.getWeaponDurability() - 0.1f);
	attackWeapon.setCost();

	if (attackWeapon.getWeaponDurability() <= 0) {
		cout << "You' weapon is broken" << endl;
		attackWeapon = Weapon();
		return;
	}
	cout << attackWeapon.setNameWeapon() << " a inflige "
		<< attackWeapon.setWeaponDamages() << " degats a " << character.setName()
		<< ". Il lui reste " << character.getHP() << " PV."
		<< endl;
}*/


