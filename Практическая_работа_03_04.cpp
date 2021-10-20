#include <iostream>
#include <math.h>
using namespace std;
void sergay(double a,double p) {
	double x;
	x = sqrt(p * (a / 2) * (a / 2) * (a / 2));
	cout << "Сторона\tПлощадь\n " << a << "\t" << x<<endl;
}
void sergay(double a) {
	double p, x;
	p = 3 * a / 2;
	x = sqrt(p * (p /3) * (p / 3) * (p / 3));
	cout << "Сторона\tПлощадь\n " << a << "\t" << x<<endl;
}
int main()
{
	setlocale(LC_ALL, "rus");
	double  p,a;
	cout << "Введите значение стороны треугольника\t";
	cin >>a;
	p=3*a/2;
	sergay(a,p);
	sergay(a);
	return 0;
}