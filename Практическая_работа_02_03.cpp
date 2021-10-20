#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int k, m, s;
	cout << "Введите значение до какого числа нужно суммировать числа от 1 \t";
	cin >> k;
	cout << "Введите значение от какого числа нужно суммировать числа до 100\t";
	cin >> m;
	s = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}
	cout << "Сумма чисел равна " << s;
	return 0;
}
