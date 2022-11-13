/*Idea: doi_he() function will convert number from m type to decimal type. Then will convert demical type to n type*/
#include <cstring>
#include <iostream>

char* doi_he(char* number, int m, int n)
{
	static char ketqua[17];
	char chuso[17] = "0123456789ABCDEF";
	int i{ 0 };
	int giatri{ 0 };
	int len;

	len = strlen(number);
	while (i < len)
	{
		giatri = giatri * m + (strchr(chuso, number[i]) - chuso); /*converting number from m type to decimal type*/ 
		++i;
	}

	i = 16;
	do
	{
		ketqua[i] = chuso[giatri % n];
		giatri /= n;
		i--;
	} while (giatri > 0);

	return (ketqua + i + 1);
}