#include <iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	// конструктор по умолчанию
	Distance() : feet(0), inches(0.0) { }
	// конструктор с двумя параметрами
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getdist()
	{
		cout <<"\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}
	Distance operator+ (Distance) const;
	Distance operator- (Distance) const;
};
Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}
Distance Distance::operator- (Distance d2) const
{ 

	if (feet > d2.feet || ((feet == d2.feet) && (inches > d2.inches))) {

		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i < 0) {
			i += 12;
			f--;
		}
		return Distance(f, i);
	}
	else {
		cout << "Расстояние не может быть отрицательным";
		return Distance();
	}
	
}
int main() {
	setlocale(LC_ALL, "rus");
	Distance dist1, dist2, dist3, dist4;
	dist1.getdist();
	dist2.getdist();
	dist3 = dist1 + dist2;
	dist4 = dist1 + dist2 + dist3;
	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << "\ndist4 = ";
	dist4.showdist();

	dist3 = dist1 - dist2;
	cout << "\ndist3 = ";
	dist3.showdist();

	return 0;
}