﻿#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, temp;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	temp = a;
do
	{
		a = temp;
		if (a < b) {
			temp = a;
			a = b;
			b = temp;
		}
		temp = a - b;
		a = b;
} while (temp != b);
	cout << "НОД = " << b << endl;
}
