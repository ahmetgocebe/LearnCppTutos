#include <iostream>
#include "main.h"

int main()
{
	std::cout << "Hello world" << std::endl;
	Add(5, 10);
	std::cin.get();
}

void Add(int a, int b)
{
	std::cout << "The sum of " << a << " and " << b << " is: " << (a + b) << std::endl;
}