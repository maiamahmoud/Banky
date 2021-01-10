#include "Main Header.h"
#include"Account.h"
int main()
{
	unsigned int user_option;
	bool FirstTime=true;
	cout << "                ------------------------------------------------\n";
	cout << "                |                 Banky system                 |\n";
	cout << "                ------------------------------------------------\n";
	cout << "                 MAIN MENU \n";
	cout << "                 -----------------------------\n";
	cout << "                | 01: NEW ACCOUNT             |\n";
	cout << "                | 02: DEPOSTIE MONEY          |\n";
	cout << "                | 03: WITHDRAW MONEY          |\n";
	cout << "                | 04: BALANCE ENQUIRY         |\n";
	cout << "                | 05: SHOW PREVIOUS OPERATION |\n";
	cout << "                | 06: MODIFY ACCOUNT          |\n";
	cout << "                | 07: CLOSE ACCOUNT           |\n";
	cout << "                | 08: EXIT                    |\n";
	cout << "                 -----------------------------\n";
	
	do {
		cout <<"                Your Choice: ";
		cin >> user_option;
		switch (user_option)
		{
		case 1:
			New_Account(FirstTime);
			break;
		case 2:
			Deposite_Money(FirstTime);
			break;
		case 3:
			Withdraw_Money(FirstTime);
			break;
		case 4:
			Balance_Enquiry(FirstTime);
			break;
		case 5:
			Show_Previous(FirstTime);
			break;
		case 6:
			Modify_Account(FirstTime);
			break;
		case 7:
			Close_Account(FirstTime);
			break;
		case 8:
			cout << "                ------------------------------------------------\n";
			cout << "                |           THANK YOU FOR USING BANKY!         |\n";
			cout << "                ------------------------------------------------\n";
			break;
		};
	} while (user_option != 8);

	return 0;
}