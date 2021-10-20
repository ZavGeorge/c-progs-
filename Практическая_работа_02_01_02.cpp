#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int num;
	cout << "Введите номер года\n";
	cin >> num;
	if (num % 400 == 0)
		cout << "YES";
	else if (num % 4 == 0 && num % 100 != 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}