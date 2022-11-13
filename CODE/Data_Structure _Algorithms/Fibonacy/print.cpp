#include <iostream>

void print(int n, int *p)
{
	for (int index = 0; index < n; ++index)
	{
		std::cout << p[index] << ' ';
	}
}

void print_number(int number, int* p)
{
	p[0] = 1;
	p[1] = 1;
	for (int index = 1; p[index] <= number; ++index)
	{
		std::cout << p[index] << ' ';
	}
}