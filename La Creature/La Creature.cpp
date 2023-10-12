#include <iostream>
#include <string>
#include "Weapon.h"
#include "DamageType.h"
#include "Attack.h"
#include "Monster.h"
#include "creature.h"
#include "Character.h"

using namespace std;

int main()
{
	srand(time(NULL));

	Attack Bludgeoning = Attack("Bow", "", 10, 15, 50, 1);
	Attack Slashing = Attack("Dagger", "", 15, 8, 20, 1);
	Attack Piercing = Attack("Staff", "",  15, 10, 75, 1);
	Attack Burning = Attack("Sword", "", 10, 50, 250, 1);

}

