#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int X,Y;
	std::cout << "�������� ������ �21\n������� 2 �����:\n";
	std::cin >> X >> Y;
	int* pX = &X;
	int* pY = &Y;
	std::cout << "������� �������������� ��������� ����� = " << (double)(*pX + *pY) / 2;


	return 0;
}