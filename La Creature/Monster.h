#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "DamageType.h"
#include "creature.h"
#include "Weapon.h"
using namespace std;

enum class MonsterType {
	Default,
	Golem,
	Wolf,
	Dragon,
};

static string MonsterToStr(MonsterType monsterType) {
	switch (monsterType) {
	case MonsterType::Golem:
		return "Golem";
	case MonsterType::Wolf:
		return "Wolf";
	case MonsterType::Dragon:
		return "Dragon";
	default:
		return "Default";
	}

}
enum class LootType {
	Default,
	Cookie,
	Skull,
	Rock,
};

static string LootToStr(LootType lootType) {
	switch (lootType) {
	case LootType::Cookie:
		return "Cookie";
	case LootType::Skull:
		return "Skull";
	case LootType::Rock:
		return "Rock";
	default:
		return "Default";
	}

}

