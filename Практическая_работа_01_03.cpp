#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double x, p;
	cout << "Введите значение периметра\t";
	cin >> p;
	x = sqrt(p / 2 * (p / 6) * (p / 6) * (p / 6));
	cout << "Сторона\tПлощадь\n " << p / 3 << "\t" << x;
	return 0;
}