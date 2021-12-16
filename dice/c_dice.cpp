#include "c_dice.h"

c_dice::c_dice()
{
	this->num = rand() % 6 + 1;
}

c_dice::c_dice(int num)
{
	this->num = num;
}

std::ostream& operator<<(std::ostream& out, c_dice& dice)
	{
		out << dice.num;
		return out;
	}
