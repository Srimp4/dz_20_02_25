#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	double USD, euro, yuan, yen, ruble;
	char choise;
	double comission;
	std::cout << "enter the amount of *insert Eugene Crabs voice here* money you have (in rubles)\n";
	std::cin >> ruble;
	std::cout << "pick the currency\nU (USD)\ne (euro)\nu (yuan)\ny (yen)\n";
	std::cin >> choise;
	while (true)
	{
		if (choise == 'U')
		{
			USD = ((ruble / 99.42) * 100) / 5;
			comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << USD << " U.S. dollars\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else if (choise == 'e')
		{
			euro = ((ruble / 106.3) * 100) / 5;\
				comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << euro << " euro\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else if (choise == 'u')
		{
			yuan = ((ruble / 13.6) * 100) / 5;
			comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << yuan << " yuan\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else if (choise == 'y')
		{
			yen = ((ruble / 0.662898) * 100) / 5;
			comission = ruble / 5;
			std::cout << "cool, you can convert it in\n" << yen << " yen\n";
			std::cout << "(we take " << comission << " (5%) (from your initial money) 'cause we like *insert Eugene Crabs voice here* MONEY)\n";
		}
		else
		{
			std::cout << "u stoopid\n";
		}
		cout << "if you wanna do that again input 1, if you're done input whatever, i'm a line of code and can't realy make you do something\n";
		int choise2;
		cin >> choise2;
		if (choise == 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return 0;
}