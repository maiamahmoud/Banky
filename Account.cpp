#include "Account.h"
//#include"Transaction.h"
//Account::Account() :m_name{ " " }, m_address{ " " }, m_id{ 0 }, m_age{ 0 }, m_balance{ 0 }, m_numberOfOperations{0} {
//
//}
Account::~Account() {}
void Account::mNew_Account(string name, string address, unsigned int age, unsigned int id, unsigned int balance)
{
	m_name = name;
	m_address = address;
	m_age = age;
	m_id = id;
	m_balance = balance;
	m_numberOfOperations++;
}
bool Account::mDeposite_Money(unsigned int input)
{
	if (input <= 0)
	{
		return false;
	}
	else {
		m_balance += input;
		cout << "                INFO:Current Balance: " << m_balance << "\n";
		m_transactions.push_back(Transaction(input, "Deposite"));
		return true;
	}
	
}
bool Account::mWithdraw_Money(unsigned int money)
{
	if (money <= 0)
	{
		return false;
	}

	if (money > m_balance)
	{
		cout << "                ERROR : Balance isn't enough \n";
		return false;
	}
	else {
		m_balance -= money;
		cout << "                INFO:Current Balance: " << m_balance << "\n";
		m_transactions.push_back(Transaction(money, "Withdraw"));
		return true;
	}	
}
vector<string> Account::Report()
{
	vector<string> report;
	report.push_back("                Balance is " + to_string(m_balance));
	report.push_back("                Transactions : ");
	for (auto i:m_transactions)
	{
		report.push_back(i.Report());
	}
	report.push_back("                ----------------------");
	return report;
}