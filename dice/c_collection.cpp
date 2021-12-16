#include "c_collection.h"

int c_collection::sum()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i].getnum();
	}
	return sum;
}

c_dice& c_collection::operator[](const int index)
{
	if (index >= 0 && index <= 10)
		return arr[index];
	return arr[0];
}

std::ostream& operator<<(std::ostream& out, c_collection col)
{
	for (int i = 0; i < 10; i++)
	{
		out << col.arr[i] << "\n";
	}
	return out;
}
