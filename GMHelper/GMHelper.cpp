// GMHelper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class _NPCBuilder {

public:
	int weight, height, age;
	string name, surname, hairColor, eyesColor;
	~_NPCBuilder() {};
	_NPCBuilder() {};

};

class Dwarf : public _NPCBuilder {
	int ww = 30, us = 20, k = 20, odp = 30, zr = 10, intel = 20, sw = 20, ogd = 10;
	int roll = NULL;
public :
	
	Dwarf() {
		cout << "Podaj wiek swojej postaci: "; cin >> this->age; cout << endl;
		cout << "Podaj wzrost swojej postaci: "; cin >>	this->height; cout << endl;
		cout << "Podaj wage swojej postaci: "; cin >> this->weight; cout << endl;
	};
	


	void setStat(string whichStat) {
		
		if (whichStat == "ww" || whichStat == "WW") {
			int ifRoll = 0;
			do {
				cout << "Rzucasz, czy mam to zrobic za Ciebie?" << endl;
				cout << "Jezeli czujesz siê szczesliwy - po prostu wpisz wynik z Twoich rzutow 2k10. Jezeli chcesz bym to ja losowal - wpisz 0" << endl;
				cin >> ifRoll;
				if (ifRoll == 0) {
					srand(time(NULL));
					ww += rand() % 20 + 1;
				}
				if (ifRoll > 20 || ifRoll < 0) {
					cout << "Oszukujesz albo mnie, albo siebie - rzut dla krasnoluda wykonujemy 2k10!" << endl;
				}
				else {
					ww += ifRoll;
				}
			} while (ifRoll > 20 || ifRoll < 0);
		}
	}
	int getWW() {
		return ww;
	}
};
void testDwarf() {
	Dwarf d;
	string stat;
	cout << "Podaj statystyke do ustawienia" << endl;
	cin >> stat;
	d.setStat(stat);
	cout << d.getWW();
}
int main() {
	testDwarf();
}
