#include <iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	const float MTF;
	// конструктор по умолчанию
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet - feet); // остаток - это дюймы
	}
	// конструктор с двумя параметрами
	void getdist()
	{
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}
	explicit operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
};

int main() {
	setlocale(LC_ALL, "rus");
	Distance dist1 = 2.35F, dist2;
	dist1.showdist();
	float mtrs;
	mtrs = static_cast<float>(dist1);
	cout << mtrs<<endl;
	Distance dist3 = static_cast<Distance> (mtrs);
	dist3.showdist();
	//mtrs = dist2;
	cout << mtrs << endl;
	dist2.showdist();
	return 0;
}