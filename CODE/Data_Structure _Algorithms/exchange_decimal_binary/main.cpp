

#include <iostream>
#include "header.h"

int main()
{
	int m;
	int n;
	char number[17];
	char* ketqua;

	do
	{
		std::cout << "\nNhap co so M cua he dem xuat phat (2, 8, 10, 16):";
		std::cin >> m;
	}while (m < 2 || m > 16);

	std::cout << "\nNhap so nguyen thuoc he dem co so " << m << ": ";
	std::cin >> number;
	//getchar();
	//gets_s(number);

	do
	{
		std::cout << "\nNhap co so N cua he dem moi (2, 8, 10, 16):";
		std::cin >> n;
	} while (n<2 || n > 16);

	std::cout << "So " << number << " o he dem co so " << m;
	std::cout << " bieu dien o he dem co so " << n << " co gia tri la: ";

	ketqua = doi_he(number, m, n);
	//puts(ketqua);
	std::cout << ketqua;
	return 0;
}