#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double x, y;
	cout << "Введите координаты точки\t";
	cin >> x >> y;
	if (x * x + y * y < 9 && y >0)
		cout << "Точка расположена внитри заданной полуокружности";
	else if (x * x + y * y > 9 || y > 0)
		cout << "Точка расположена снаружи заданной полуокружности";
	else
		cout << "Точка расположена на границе";
	return 0;
}