#include "header.h"
int greatest_common_divisor(int a, int b)
{
	int du = 1;
	while (du != 0)
	{
		du = a % b;
		a = b;
		b = du;
	}

	return a;
}