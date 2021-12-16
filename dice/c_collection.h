#pragma once
#include"c_dice.h"
class c_collection
{
private:
	c_dice arr[10];
public:
	int sum();
	c_dice& operator[](const int index);
	friend std::ostream& operator<<(std::ostream& out, c_collection col);
};

