// GMHelper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

class _NPCBuilder {

public:
	int age;
	~_NPCBuilder() {};

	virtual void setAge(int _age) = 0;
};

class Dwarf : public _NPCBuilder {
public:
	void setAge(int _age) {
		age = _age;
	}
};

int main()
{
	Dwarf nok;
	nok.setAge(105);
	std::cout << nok.age;
}
