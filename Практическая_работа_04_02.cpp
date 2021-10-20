#include <iostream>
#include <cmath>
using namespace std;
int Myroot(double a, double b, double c, double& x1, double& x2,double& D);
int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c, x1, x2, D;
	cout << "Введите коэффициенты квадратного уравнения: a, b, c\t";
	cin >> a >> b >> c;
	cout << Myroot(a, b, c, x1, x2,D) << endl;
	if (D >= 0)
		cout << "x1 = " << x1 << "\t" << "x2 = " << x2;
	else
		cout << "Корней нет" << endl;
	return 0;
}
int Myroot(double a, double b, double c, double& x1, double& x2,double& D) {
	D = b * b - 4 * a * c;
	if (D < 0)
		return -1;
	else
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
	if (x1 == x2) 
		return 0;
	else
		return 1;
	}
}