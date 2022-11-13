#include <iostream>

int main()
{
	int money{};
	int number_money[6];
	int some_money[6];
	some_money[0] = 50000;
	some_money[1] = 20000;
	some_money[2] = 10000;
	some_money[3] = 5000;
	some_money[4] = 2000;
	some_money[5] = 1000;

	std::cout << "exchange money to smaller moneys";
	std::cout << "enter money: ";
	std::cin >> money;

	for (int index = 0; index < 6; ++index)
	{
		number_money[index] = money / some_money[index];
		money = money % some_money[index];
	}

	for (int index = 0; index < 6; ++index)
	{
		std::cout << some_money[index] << "type have: " << number_money[index] << '\n';
	}
	
	return 0;
}