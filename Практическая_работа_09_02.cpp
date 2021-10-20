#include <iostream>
#include <math.h>
using namespace std;

class Triangle {
public:
	void set_side(int a,int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		if (a + b < c || a + c < b || b + c < a)
			throw "Треульника с такими сторонами не существует";
	}
	double square()
	{
		double p = (a + b + c) / 2;
		
		return (sqrt(p * (p - a) * (p - b) * (p - c)));
	}
private:
	int a, b, c;
};

int main() 
{
	setlocale(LC_ALL, "rus");
	try
	{
		Triangle triangle;
		int a, b, c;
		cout << "Введите стороны трегольника через пробел" << endl;
		cin >> a >> b >> c;
		triangle.set_side(a, b, c);
		cout << "Площадь равна "<<triangle.square();
	}
	catch (const char *f)
	{
		cout << f << endl;
	}

	return 1;
}
