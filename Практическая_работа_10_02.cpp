#include <iostream>
#include "dot.h"

using namespace std;

class Triangle {
public:
	Triangle(Dot A, Dot B, Dot C) {
		this->A = A;
		this->B = B;
		this->C = C;
	}
	double perimeter() {
		return (A.distanceTo(B) + B.distanceTo(C) + C.distanceTo(A));
	}
	double square() {
		double p = perimeter() / 2;
		return (sqrt(p * (p - A.distanceTo(B)) * (p - B.distanceTo(C)) * (p - C.distanceTo(A))));
	}
private:
	Dot A, B, C;
};

int main()
{
	
	Dot a(3, 0) ;
	Dot b;
	Dot c(0, 4);

	Triangle ABC(a, b, c);
	//Triangle tr(Dot(1,5),Dot(1,5),Dot(5,7));
	cout <<"P:"<< ABC.perimeter() << endl;
	cout <<"S:"<< ABC.square() << endl;

	/*cout << "P:" <<tr.perimeter() << endl;
	cout << "S:" <<tr.square() << endl;*/
	return 0;
}