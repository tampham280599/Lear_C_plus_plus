/*tap nua boi A la tap duoc dinh nghia nhu sau
*a) a thuoc A
*b) neu k thuoc A thi 2k + 1 va 3k+1 thuoc A. Ngoai ra tap A khong chua bat ky so nao khac
* In ra n so dau tien cua A (n < 100) theo trat tu tang dan. Vi du day tang dan gom 9 so dau tien cua A la: 
1, 3, 4, 7,9,10,13,15,19,...
*/

/* a[0] = 1, i = 0, k1 = k2 = 0, a1, a2
a1 = 2a[k1] + 1; a2 = 3a[k2] + 1   
a1 <= a2-- > a[i] = a1; k1 ++
a1 >= a2-- > a[i] = a2; k2 ++

a1 = 2 * 1 + 1 = 3; a2 = 3 * 1 + 1 = 4--->a1 < a2--> a[1] = 3, k1 = 1; k2 = 0;
a1 = 2 * 3 + 1 = 7; a2 = 3 * 1 + 1 = 4 --->a1 > a2-- > a[2] = 4, k1 = k2 = 1;
a1 = 2 * 3 + 1 = 7; a2 = 3 * 3 + 1 = 10->a[3] = 7; k1 = 2; k1 = 1;
a1 = 2 * 4 + 1 = 9; a2 = 3 * 3 + 1 = 10;->a[4] = 9; k1 = 3; k2 = 1; */

#include <iostream>
#include <cstdint>

int main()
{
	std::cout << "Building programing perform multi half" << "\n";
	int16_t n;
	int16_t i;
	int k1 = 0;
	int k2 = 0;
	int a1;
	int a2;
	int a[100];

	std::cout << "Enter n: ";
	std::cin >> n;

	std::cout << "print multi half: 1 ";
	a[0] = 1;
	for (i = 1; i < n; ++i)
	{
		a1 = 2 * a[k1] + 1;
		a2 = 3 * a[k2] + 1;
		if (a1 < a2)
		{
			a[i] = a1;
			++k1;
		}
		else
		{
			a[i] = a2;
			++k2;
		}
		std::cout << a[i] << ' ';
	}
















}