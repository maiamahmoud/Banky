#include"Main Header.h"
#include"Account.h"
Account account;
void New_Account(bool& firstTime) {
	if (firstTime)
	{
		string name, address;
		unsigned int id, balance, age;

		cout << "                name: ";  //TODO: valid_name()
		cin.ignore();
		getline(cin, name);
		cout << "                id: ";    //TODO: valid_id()
		cin >> id;
		cout << "                age: ";   //TODO: valid_age();
		cin >> age;
		cout << "                address: ";
		cin.ignore();
		getline(cin, address);
		cout << "                balance: ";
		cin >> balance;

		if (balance >= 1500)
		{
			account.mNew_Account(name, address, age, id, balance);
			firstTime = false;
		}
		else
		{

			cout << "                Not Enough Money!\n";
		}
	}
	else {
		cout << "            ERROR: Account Already Created!\n";
	}
	

}
void Deposite_Money(bool const& firstTime){
	if (!firstTime)
	{
		unsigned int money;
		cout << "                Enter Money: ";
		cin >> money;
		account.mDeposite_Money(money);
	}
	else {
		cout << "                ERROR: No Account Found! \n";
	}
}
void Withdraw_Money(bool const& firstTime){
	if (!firstTime)
	{
		unsigned int money;
		cout << "                Money to Withdraw: ";
		cin >> money;
		account.mWithdraw_Money(money);
	}
	else {
		cout << "                ERROR: No Account Found! \n";
	}
}
void Balance_Enquiry(bool const& firstTime){
	if (!firstTime)
	{
		cout<<"                Your Balance: "+to_string(account.getBalance())+"\n";
	}
	else {
		cout << "                ERROR: No Account Found! \n";
	}
}
void Close_Account(bool & firstTime) {
	if (!firstTime)
	{
		account.~Account();
		firstTime = true;
	}
	else {
		cout << "                ERROR: No Account Found! \n";
	}
}
void Modify_Account(bool const& firstTime) {
	if (!firstTime)
	{
		int modification_choice;
		cout << "                 ---------------------\n";
		cout << "                | 01: Modify Name     |\n";
		cout << "                | 02: Modify Id       |\n";
		cout << "                | 03: Modify Address  |\n";
		cout << "                | 04: Modify Age      |\n";
		cout << "                | 05: Stop Modifying  |\n";
		cout << "                 ---------------------\n";
		do {
			cout << "                Modification Choice :";
			cin >> modification_choice;
			string name, address;
			int id, age;
			switch (modification_choice)
			{
			case 1:
				cout << "                New Name: ";
				cin.ignore();
				getline(cin, name);
				account.SetName(name);
				break;
			case 2:
				cout << "                New ID: ";
				cin >> id;
				account.SetID(id);
				break;
			case 3:
				cout << "                New Address: ";
				cin.ignore();
				getline(cin, address);
				account.SetAddress(address);
				break;
			case 4:
				cout << "                New Age: ";
				cin >> age;
				account.SetAge(age);
				break;
			}
		} while (modification_choice != 5);


	}
	else {
		cout << "                ERROR: No Account Found! \n";
	}
}
void Show_Previous(bool const& firstTime){
	if (!firstTime)
	{
		vector<string> log =account.Report();
		for (auto i : log)
		{
			cout << i << std::endl;
		}
	}
	else {
		cout << "                ERROR: No Account Found! \n";
	}
}


