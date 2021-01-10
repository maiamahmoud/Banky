#include "Transaction.h"

Transaction::Transaction(int am, string op) :amount(am), operation(op) {}

string Transaction::Report()
{
	return "                "+operation+" "+ to_string(amount);
}
