#include "IdCard.h"

IdCard::IdCard()
{
	number = 0;
	category = "Не установлена";
}

IdCard::IdCard(int n): IdCard()
{
	number = n;
}

IdCard::IdCard(int n, string cat)
{
	number = n;
	category = cat;
}

void IdCard::setNumber(int newNumber)
{
	number = newNumber;
}

void IdCard::setCategory(string cat)
{
	category = cat;
}

int IdCard::getNumber()
{
	return number;
}

string IdCard::getCategory()
{
	return category;
}