#include <iostream>
using namespace std;
template<class T>
void sorting(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
template<class Print>
void printing(Print arr[], int size) 
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ; ";

}
template<class sum>
void sumar(sum arr[], int size) {
	sum countsum=0;
	for (int i = 0; i < size;i++)
	{
		countsum += arr[i];
	}
	cout <<"Среднее арифметическое равно "<< countsum / size;
}
void sorting(int arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		int x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	long arrl[] = { 1223123,23123,3123,4342,3213,43424235454 };
	char arrc[] = "Hello, word";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	int k4 = sizeof(arrl) / sizeof(arrl[0]);
	sorting(arr, k1);
	printing(arr, k1);
	cout << endl;
	sorting(arrd, k2);
	printing(arrd, k2);
	cout << endl;
	sorting(arrc, k3);
	printing(arrc, k3);
	cout << endl;
	sorting(arrl, k4);
	printing(arrl, k4);
	cout << endl;
	sumar(arr, k1);
	cout << endl;
	sumar(arrd, k2);
	cout << endl;
	sumar(arrc, k3);
	cout << endl;
	sumar(arrl, k4);
	cout << endl;
	return 0;
}