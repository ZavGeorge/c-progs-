#include <string>
#include <sstream>
using namespace std;
#pragma once /* Защита от двойного подключения заголовочного файла */
class human {
public:
	// Конструктор класса human
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека
	virtual string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество
};