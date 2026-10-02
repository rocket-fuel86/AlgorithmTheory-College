#pragma once

#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
	string name;
	double money;
public:
	Bank() = default;
	Bank(string name, double money);
	string getName();
	double getMoney();
	void setName(string name);
	void setMoney(double money);
};