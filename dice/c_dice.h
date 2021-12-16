#pragma once
#include<iostream>
class c_dice
{
private:
	int num;
public:
	c_dice();
	c_dice(int num);
	int getnum() const
	{
		return num;
	}
	friend std::ostream& operator<<(std::ostream& out, c_dice& dice)
	{
		out << dice.num;
		return out;
	}
};

