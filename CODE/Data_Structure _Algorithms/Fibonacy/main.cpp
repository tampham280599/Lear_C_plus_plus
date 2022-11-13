#include <iostream>
#include "fibonacy.h"
int main()
{
	int n;
	int number;
	int arrayFibo[50];

	std::cout << "Print Fibonacy Array\n";
	
	std::cout << "In n so Fibonacy dau tien. Nhap so n: ";
	std::cin >> n;
	fibonacy_1(n, arrayFibo);
	print(n, arrayFibo);

	std::cout << "\nIn n so Fibonacy nho hon so number: ";
	std::cin >> number;
	fibonacy_2(number, arrayFibo);
	print_number(number, arrayFibo);

	std::cout << "\nIn n so Fibonacy bang de quy: ";
	std::cin >> n;
	fibonacy_3(n, arrayFibo);
	print(n, arrayFibo);

}