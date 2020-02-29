#pragma once
#include <iostream>

class _NPCBuilder
{
public:
	std::string _name;
	std::string _surname;
	int _age;
	int _height;
	int _weight;

	virtual ~_NPCBuilder() {};
	virtual void setWeight(int weight);
	//virtual void setAge();
	//virtual void setHeight();
	//virtual void setName();
	//virtual void setSurname();
};

