#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double sum = 0;
	int const n = 100;
	double nums[n];
	for (int i = 0; i < n; i++)
	{
		nums[i] = (rand() % 100);
	}
	ofstream fout("tester", ios::out | ios::binary);
	if (!fout) {
		cout << "Файл открыть невозможно\n";
		return 1;
	}
	fout.write((char*)nums, sizeof(nums));
	fout.close();

	ifstream fin("tester", ios::in | ios::binary);
	if (!fin) {
		cout << "Файл открыть невозможно";
		return 1;
	}
	fin.read((char*)&nums, sizeof(nums));
	int k = sizeof(nums) / sizeof(double);
	for (int i = 0; i < k; i++)
	{
		sum = sum + nums[i];
		cout << nums[i] << ' ';
	}
	cout << "\nsum = " << sum << endl;
	fin.close();

	return 1;
}
