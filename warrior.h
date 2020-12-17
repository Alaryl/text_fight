#pragma once
#include <string>
class Warrior {
private:
	std::string name;
	float hp;
	float damage;
	float pts;
	float armor;
public:
	Warrior();
	Warrior(std::string, float, float, float, float);
	std::string getName();
	float getHP();
	float getDamage();
	float getPts();
	float getArmor();
	void setName(std::string);
	void setHP(float);
	void setDamage(float);
	void setPts(float);
	void setArmor(float);
	void showStatus();
};