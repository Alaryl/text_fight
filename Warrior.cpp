#include "warrior.h"
#include <iostream>
#include <string>
Warrior::Warrior():name(" "), hp(0), damage(0), pts(0), armor(0) {
	//name = " "; hp = 100; damage = 5; pts = 1; armor = 10;
}
Warrior::Warrior(std::string fname, float fhp, float fdamage,
	float fpts, float farmor):
	name(fname), hp(fhp), damage(fdamage), pts(fpts), armor(farmor) {}

std::string Warrior::getName() { return name; }
float Warrior::getHP() { return hp; }
float Warrior::getDamage() { return damage; }
float Warrior::getPts() { return pts; }
float Warrior::getArmor() { return armor; }
void Warrior::setName(std::string fname) { name = fname; }
void Warrior::setHP(float fhp) { hp = fhp; }
void Warrior::setDamage(float fdamage) { damage = fdamage; }
void Warrior::setPts(float fpts) { pts = fpts; }
void Warrior::setArmor(float farmor) { armor = farmor; }
void Warrior::showStatus() {
	std::cout << "name:" << name;
	std::cout << "HP:" << hp;
	std::cout << "Armor:" << armor;
	std::cout << "your damage:" << damage;
	std::cout << "attacks per second :" << pts << std::endl;
}