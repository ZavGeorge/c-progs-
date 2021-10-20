#include <iostream>
using namespace std;
void show_array(const int arr[], const int n);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));
int main()
{
	bool (*from_f[2])(int, int) = { from_min,from_max };
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество элементов массива" << endl;
	cin >> n;
	int my_choose = 0;
	cout << "Выберите тип сортировки 1 - по возрастанию\t 2 - по убыванию\n";
	cin >> my_choose;
	int* A = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "A["<< i << "] = ";
		cin >> A[i];

	}
	show_array(A, n);
	bubble_sort(A, n, (*from_f[my_choose - 1]));
	
	show_array(A, n);
	delete[] A;
	return 0;

}
void show_array(const int Arr[], const int N) {
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << endl;
}
bool from_min(const int a, const int b)
{
	return a > b;
}
bool from_max(const int a, const int b)
{
	return a < b;
}
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
		}
	}
}