#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char str[100];
	int len;

	cout << "\nNhap mot chuoi bat ky: ";
	gets_s(str);

	len = strlen(str);

	cout << "\nDo dai cua chuoi la: " << len << endl;
	return(0);
}

