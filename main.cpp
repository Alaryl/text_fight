#include "warrior.h"
#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	Warrior knight("Knight", 1000, 300, 1, 100);
	Warrior paladin("Paladin", 800, 200, 1.5, 300);
	while (knight.getHP() >= 0 && paladin.getHP()>=0) {
		//knight.attack(paladin);
		//рыцарь наносит удар паладину
		cout << "Knight attack Paladin :" << endl;
		float damage = knight.getDamage();
		float armor = paladin.getArmor();
		float part = armor / 1000;
		float pdamage = damage * (1 - part);
		float hp = paladin.getHP();
		hp = hp - pdamage;
		paladin.setHP(hp);
		paladin.showStatus();
		Sleep(1000);//ждать 1 сек - 1000 мсек

		//паладин ударил рыцаря
		cout << "Paladin attack Knight :" << endl;
		damage = paladin.getDamage();
		armor = knight.getArmor();
		part = armor / 1000;
		pdamage = damage * (1 - part);
		hp = knight.getHP();
		hp = hp - pdamage;
		knight.setHP(hp);
		knight.showStatus();
		Sleep(1000);//ждать 1 сек - 1000 мсек

	}
	if (paladin.getHP() > 0) cout << "Paladin wins\n";
	else
		if (knight.getHP() > 0) cout << "Knight wins\n";
		else cout << "Draw\n";
	return 0;
}