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
	const int n = 10;
	int my_choose = 0;
	cout << "Выберите тип сортировки 1 - по возрастанию\t 2 - по убыванию\n";
	cin >> my_choose;
	int A[n] = { 9,8,7,6,1,2,3,5,4,9 };
	
	show_array(A, n);
	bubble_sort(A, n, (from_f[my_choose - 1]));

	show_array(A, n);
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