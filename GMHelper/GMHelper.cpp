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
//	_NPCBuilder(int w, int h, int a, string n, string sn, string hC, string eC) {}
//	virtual void rollWW(int manRoll);
};

class Dwarf : public _NPCBuilder {
	int ww = 30, us = 20, k = 20, odp = 30, zr = 10, intel = 20, sw = 20, ogd = 10;
	int roll = NULL;
public :
	Dwarf() {};
	void rollWW(int manRoll) {
		srand(time(NULL));
		if (manRoll == 0) {
			ww += rand() % 20 + 1;
		}
		else
		{
			ww += manRoll;
		}
	}
	int getWW() {
		return ww;
	}
};

int main() {
}
