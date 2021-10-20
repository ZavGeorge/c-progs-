#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream fout;
	fout.open("text.txt");
	if (!fout) {
		cout << "Файл открыть невозможно";
		return 1;
	}
	int i = 0;
	cout << "Напишите стихотворение, для завершения перейдите на новую строку два раза\n";

	string a;
	while (i <2 ) {
		a = "";
		getline(cin, a);
		fout << a << "\n";
		if (a == "")
			i += 1;
		else
			i = 0;
	}
	fout.close();
	return 0;
}
