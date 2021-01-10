#pragma once
#include"Main Header.h"
class Transaction
{
private:
	int amount;
	string operation;

public:
	Transaction(int am, string op);
	string Report();
};

