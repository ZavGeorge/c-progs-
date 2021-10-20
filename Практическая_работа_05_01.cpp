#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 10;
	int mas[n];
	int i;
	for ( i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]= ";
		cin >> mas[i];
	}
	int s = 0;
	int minel , maxel, MaElI, MiElI;
	minel = mas[0];
	maxel = mas[0];

	for ( i = 0; i < n; i++) {
		s += mas[i];
		if (minel >= mas[i]) {
			minel = mas[i];
			MiElI = i;
		}
		if (maxel <= mas[i]) {
			maxel = mas[i];
			MaElI = i;
		}
	}
	cout << "Сумма элементов равна " << s << "\tсреднее значение равно " << (double)s/n << endl;
	s = 0;
	for ( i = 0; i < n; i++)
	{
		if (mas[i] < 0)
			s += mas[i];
	}
	cout << "Сумма отрицательных элементов равна " << s << endl;
	s = 0;
	for ( i = 0; i < n; i+=2)
	{
			s +=  mas[i];
	}
	cout << "Сумма элемнтов с четными номерами равна " << s << endl;
	s = 0;
	for ( i = 1; i < n; i += 2)
	{
		s += mas[i];
	}
	cout << "Сумма элемнтов с нечетными номерами равна " << s << endl;
	cout << "Максимальный элемент массива\t" << maxel << "\tс индексом " << MaElI << endl;
	cout << "Минимальный элемент массива\t" << minel << "\tс индексом " << MiElI << endl;
	s = 1;
	if (MaElI == 1 + MiElI || MaElI == MiElI - 1) {
		cout << "Максимальный и минимальный элементы расположены рядом" << endl;
		return 0;
	}
	if (MaElI > MiElI)
		for ( i = MiElI + 1; i < MaElI; i++)
			s *= mas[i];
	else if (MaElI < MiElI)
		for ( i = MaElI + 1; i < MiElI; i++)
			s *= mas[i];

	cout << "Произведние элементов расположенных между максимальным и маиниамальным элементами равно " << s<< endl;
	return 0;
}