#include <iostream>
#include <cmath>
using namespace std;
double sp(int x, int y, int x1, int y1, int x2, int y2)
{
	double s,a,b,c,p;
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
	c = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a) * (p - b) * (p - c));
	return s;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int x1, y1, x2, y2, x3, y3;
	cout << "Введите координаты x,y первой точки\n";
	cin >> x1 >> y1;
	cout << "Введите координаты x,y второй точки\n";
	cin >> x2 >> y2;
	cout << "Введите координаты x,y третий точки\n";
	cin >> x3 >> y3;
	double sum = 0;
	sum += sp(x1, y1, x2, y2, x3, y3);
	cout << "Введите значение x,y четвертой точки\n";
	cin >> x2 >> y2;
	sum += sp(x1, y1, x3, y3, x2, y2);
	cout << "Введите значение x,y пятой точки\n";
	cin >> x3 >> y3;
	sum += sp(x1, y1, x2, y2, x3, y3);
	cout << "Площадь пятиугольника равна\n" << sum;
	return 0;
}
