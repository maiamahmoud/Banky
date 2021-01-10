#pragma once
#include "Main Header.h"
#include "Transaction.h"
class Account
{
private:
	string m_name;
	string m_address;
	unsigned int m_id;
	unsigned int m_age;
	unsigned int m_balance;
	unsigned int m_numberOfOperations=0;
	vector<Transaction> m_transactions;
public:
	//Account();
	~Account();
	void mNew_Account(string, string, unsigned int, unsigned int, unsigned int);
	bool mDeposite_Money(unsigned int);
	unsigned int getBalance()const { return m_balance; }
	bool mWithdraw_Money(unsigned int);
	void SetName(string name) { m_name = name; }
	void SetID(int id) { m_id = id; }
	void SetAddress(string address) { m_address = address; }
	void SetAge(int age) { m_age = age; }
	vector<string> Report();
};

