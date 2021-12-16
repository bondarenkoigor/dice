#include "c_dice.h"

c_dice::c_dice()
{
	this->num = rand() % 6 + 1;
}

c_dice::c_dice(int num)
{
	this->num = num;
}
