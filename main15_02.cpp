#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"
#include "IdCard.h"
#include "Group.h"


using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	string last_name;
	IdCard* idc = new IdCard(123456, "Базовый");
	IdCard* idc2 = new IdCard(654321, "Базовый");
	int id;
	string category;

	cout << "Name: ";
	getline(cin, name);
	cout << "Last name: ";
	getline(cin, last_name);
	cout << "Category: ";
	getline(cin, category);
	idc->setCategory(category);
	cout << "IdCard :";
	cin >> id;
	idc->setNumber(id);

	Student* student02 = new Student(name, last_name, idc);

	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	student02->set_scores(scores);
	double average_score = sum / 5.0;
	student02->set_average_score(average_score);
	IdCard* card = new IdCard(123);
	student02->setIdCard(card);
	Group gr1957("1957");
	Student* student03 = new Student("Петр", "Петров", idc2);
	Student* student04 = new Student("Семен", "Смирнов", idc);
	Student* student05 = new Student("Саша", "Коен", idc2);
	Student* student06 = new Student("Дмитрий", "Ионов", idc);
	gr1957.addStudent(student02);
	gr1957.addStudent(student03);
	gr1957.addStudent(student04);
	gr1957.addStudent(student05);
	gr1957.addStudent(student06);
	int k = gr1957.getSize();
	cout << "В группе " << gr1957.getName() << " " << k << " ст.";
	cout << endl << endl;

	gr1957.GroupOut();
	cout << endl << endl;

	gr1957.delStudent(student04);
	gr1957.GroupOut();
	cout << endl << endl;

	gr1957.delStudent(gr1957.findStudent("Дмитрий", "Ионов"));
	gr1957.GroupOut();
	cout << endl << endl;

	delete student02;
	delete student03;
	delete student04;
	delete student05;
	delete student06;

	return 0;
}