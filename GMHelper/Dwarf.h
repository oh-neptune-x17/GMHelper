#pragma once
#include "_NPCBuilder.h"
class Dwarf :
	public _NPCBuilder
{
	_NPCBuilder dwarf_generate;

public:
	virtual void setWeight(int weight);// {
	//	dwarf_generate._weight = weight;
	//}
	//virtual void setAge(int age) {
	//	dwarf_generate._age = age;
	//}
	//virtual void setHeight();
	//virtual void setName();
	//virtual void setSurname();
};

