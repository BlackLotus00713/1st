#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>



//void PrintHelloWorld();
//void PrintSum(int numberOne, int numberTwo = 4);
//int Sum(int numberOne, int numberTwo);
//void Hi();
//
//
//int MyPow(int num1, int num2)
//{
//	int number = 1;
//	for (int i = 0; i < num2; i++)
//	{
//		number *= num1;
//	}
//	return number;
//}
//
//
//
//void PrintArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//void SetArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cin>> arr[i];
//	}
//	std::cout << "\n";
//}
//
//void ChangeArray(int arr[], int size, int tempArr[])
//{
//	for (int i = 0; i < size; i++)
//	{
//		tempArr[i] = arr[i];
//	}
//	int tempArrCounter = size - 1;
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = tempArr[tempArrCounter];
//		tempArrCounter--;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		tempArr[i] = 0;
//	}
//	
//	std::cout << "\n";
//}

//int Sum(int numberOne, int numberTwo)
//{
//	return numberOne + numberTwo;
//}
//
//double Sum(double numberOne, double numberTwo)
//{
//	return numberOne - numberTwo;
//}


int Fak(int n)
{
	if (n < 0)
	{
		return 0;
	}
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * Fak(n - 1);
	}
}


int RecSum(int numberOne, int numberTwo) 
{

	if (numberTwo == numberOne - 1)
	{
		return 0;
	}
		
	return numberTwo + RecSum(numberOne, numberTwo - 1);
}

void PrintStars(int count)
{
	if (count == 0)
	{
		return;
	}
	std::cout << " * ";
	PrintStars(count - 1);
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	/*const int size = 5;
	int tempArr[size];
	int arr[size];
	
	SetArray(arr, size);
	PrintArray(arr, size);
	ChangeArray(arr, size, tempArr);
	PrintArray(arr, size);*/

	std::cout << RecSum(1, 4) << "\n"; // 10
	PrintStars(6);
	return 0;
}






void Hi()
{
	std::cout << "Hi";
}


void PrintHelloWorld()
{
	std::cout << "Hello world";
	Hi();
}


void PrintSum(int numberOne, int numberTwo)
{
	std::cout << numberOne + numberTwo;
}

int Sum(int numberOne, int numberTwo)
{
	return numberOne + numberTwo;
}




