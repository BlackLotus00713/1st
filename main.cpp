#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*short d = 6;
	int a = 1;
	float b = 3.2;
	double c = 5.3;
	long long e = 999999999;

	char hp = '6';
	char hp2 = 'f';
	char hp3 = 69;

	std::string name = "stroka";*/

	//		 ||   &&

	int a, b, c;

	std::cout << "¬ведите три числа: ";
	std::cin >> a >> b >> c;

	if (a != b && b != c && a != c) 
	{
		if (a < b && a < c) 
		{
			std::cout << a << " ";
			if (b < c) 
			{
				std::cout << b << " " << c;
			}
			else 
			{
				std::cout << c << " " << b;

			}
		}
		else if (b < a && b < c) {
			std::cout << b << " ";
			if (a < c) 
			{
				std::cout << a << " " << c;
			}
			else 
			{
				std::cout << c << " " << a;
			}
		}

		else 
		{
			std::cout << c << " ";
			if (a < b) 
			{
				std::cout << a << " " << b;
			}
			else {
				std::cout << b << " " << a;
			}
		}
	}
	else 
	{
		std::cout << "„исла не должны совпадать!";
	}

	
	
	


	return 0;
}






