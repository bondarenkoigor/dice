#include<iostream>
#include"c_collection.h"
int main()
{
	srand(time(0));
	c_dice dice;
	std::cout << dice << "\n\n";
	c_collection col;
	std::cout << col << "\n";
	std::cout << col[2] << "\n\n";
	std::cout << "sum:" << col.sum();
}