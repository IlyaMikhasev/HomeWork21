#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int X,Y;
	std::cout << "Домашняя работа №21\nВведите 2 числа:\n";
	std::cin >> X >> Y;
	int* pX = &X;
	int* pY = &Y;
	std::cout << "Среднее арифмитическое введенных чисел = " << (double)(*pX + *pY) / 2;


	return 0;
}