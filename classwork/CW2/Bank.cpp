#include "Bank.h"

Bank::Bank(string name, double money)
{
	this->name = name;

	if (money < 0)
	{
		this->money = 0;
	}
	else
	{
		this->money = money;
	}
}

string Bank::getName()
{
	return this->name;
}

double Bank::getMoney()
{
	return this->money;
}

void Bank::setName(string name)
{
	this->name = name;
}

void Bank::setMoney(double money)
{
	this->money = money;
}