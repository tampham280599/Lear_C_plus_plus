#include <iostream>
#include "header.h"
int a;
int b;
int main()
{
    std::cout << "Find greatest common divisor\n";
    inputData();
    std::cout << "Greatest common divisor of " << a << " and " << b << " is " << greatest_common_divisor(a, b);

}

