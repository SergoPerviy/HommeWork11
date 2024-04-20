#include <iostream>

int main(){

	setlocale(LC_ALL, "Russian");

	int n{}, m{};

	/*
	Задача 1
	Напишите программу, которая выводит на экран все простые числа в диапазоне от 2 до 100. 
	*/

	std::cout << "Задача №1\nПростые числа\nВведите начало и конец диапазона -> ";
	std::cin >> n >> m;
	std::cout << "Простые числа в диапазоне от " << n << " до " << m << ": ";
	for (int i = n; i <= m; i++) {
		int counter{};
		for (int j = 1; j <= m; j++) {
			if (i % j == 0)
				counter++;
		}
		if (counter == 2)
			std::cout << i << ", ";
	}
	std::cout << "\n\n";

	/*
	Задача 2
	Звездочка в консоли.
	*/

	std::cout << "Задача №2\n\n";
	const int size = 7;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j||i+j==size-1|| i==size/2||j==size/2) {
				std::cout << "* ";
			}
			else
				std::cout << "  ";
		}
		std::cout << "\n";	
	}
	std::cout << std::endl;


	return 0;
}


	