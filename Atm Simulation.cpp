#include <iostream>
#include <iomanip>
#include <time.h>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<process.h>
#include<dos.h>
using namespace std;


class Bank
{
public:
	double startBalance;
	string COKAccountHolders;
	double limit;


};



class ATMAccountHolders :public Bank
{
	string accountHolders;
	string accountHoldersAddress, branch;
	int accountNumber;
	double startBalance;
	double accountBalance;
	double accountInterest;
	double amount;
	int count;

public:

	void deposit();
	void withdraw();
	void details();
	void payBills();
	void accountExit();
	void interest();

	ATMAccountHolders()
	{
		accountNumber = 1860;
		accountHolders = "John Smith";
		accountHoldersAddress = "Japan";
		startBalance = 1000.00;
		accountBalance = 500.00;
		branch = "Bank";
		amount = 500;
	}
};

void ATMAccountHolders::interest()
{
	system("cls");

	cout << "\n\xB2\xB2\xB2\xB2\\xB2\xB2\xB2\xB2\ATM ACCOUNT INTEREST PAYMENT\xB2\xB2\xB2\xB2\\xB2\xB2\xB2\xB2\\n\n";
	cout << "\tThe Interest is calculate over the last SIX months on the average account balance\n";
	cout << "\n\t\tInterest Rate payable is 10% per annum." << endl;
	cout << "\t\tView the accumulated interest? Press 1 for Yes OR 0 for NO.\n\n";



	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT INTEREST PAYMENT \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

	cout << "\n\nAccount Holder:" << accountHolders << "\n\n";
	cout << "\tAddress :" << accountHoldersAddress << "\n\n";
	cout << "\tThe Branch location is :" << branch << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\tStarting account balance :$" << startBalance << "\n\n";
	cout << "\tPresent available balance :$" << accountBalance << "\n\n";
	accountInterest = accountBalance + (accountBalance * 1.050);
	cout << "\tPresent available balance + interest for 6 months :$" << accountInterest << "\n\n";
	cout << "Press any key to Return to the Main Menu\n\n";
	system("PAUSE");
}

void ATMAccountHolders::deposit()
{
	system("cls");
	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DEPOSIT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

	cout << "\n\nAccount Holder:" << accountHolders << "\n\n";
	cout << "\tAddress:" << accountHoldersAddress << "\n\n";
	cout << "\tThe Branch location is :" << branch << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\tStarting account balance :$" << startBalance << "\n\n";
	cout << "\tPresent available balance :$" << accountBalance << "\n\n";
	cout << "\tEnter the Amount to be Deposited $";

	double amount;
	cin >> amount;
	accountBalance = startBalance + amount;
	cout << "\n\tYour new available Balanced Amount is $" << accountBalance << endl;
	cout << "\n\t\t\tThank You!\n\n" << endl;
	cout << "Press any key to Return to the Main Menu\n\n";
	system("PAUSE");
}

void ATMAccountHolders::withdraw()
{
	system("cls");
	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

	cout << "\n\nAccount Holder:" << accountHolders << "\n\n";
	cout << "\tAddress:" << accountHoldersAddress << "\n\n";
	cout << "\tThe Branch location is :" << branch << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\tStarting account balance :$" << startBalance << "\n\n";
	cout << "\tPresent available balance :$" << accountBalance << "\n\n";
	cout << "\tEnter the Amount to be Withdrawn $";

	double amount;
	cin >> amount;

	if (amount > accountBalance || amount > 9000)//Limit set at $9000 maximum after paying bills
	{
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WITHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "\n\nAccount Holder:" << accountHolders << "\n\n";
		cout << "\tAddress:" << accountHoldersAddress << "\n\n";
		cout << "\tThe Branch location is :" << branch << "\n\n";
		cout << "\tAccount number :" << accountNumber << "\n\n";
		cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "\n\tInsufficient Available Balance in your account.\n\n" << endl;
		cout << "\t\t\tSorry !!\n" << endl;
		system("PAUSE");
	}
	else
	{
		double b;
		accountBalance = startBalance - amount;
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "\n\nAccount Holder :" << accountHolders << "\n\n";
		cout << "\tAddress is :" << accountHoldersAddress << "\n\n";
		cout << "\tThe Branch location is :" << branch << "\n\n";
		cout << "\tAccount number :" << accountNumber << "\n\n";
		cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "Your new available Balanced Amount is $" << accountBalance << endl;
		cout << "Press any key to Return to the Main Menu\n\n";
		system("PAUSE");
	}

}

void ATMAccountHolders::payBills()
{
	system("cls");


	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";

	cout << "\n\nAccount Holder :" << accountHolders << "\n\n";
	cout << "\tAddress is :" << accountHoldersAddress << "\n\n";
	cout << "\tThe Branch location is :" << branch << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "Pay Electric Company electricity bill of $150.00 now?\n\n";
	cout << "\t\tPress 1 for Yes OR Press 0 for No\n\n";

	int r;

	cin >> r;
	if (r = 1)
	{
		accountBalance = startBalance - 150;
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
		cout << "\n\tYour electricity bill of $150.00 has been paid.\n\n";
		cout << "\tYour account new Available Balanced Amount is $" << accountBalance << endl;
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "Press any key to Return to the Main Menu\n\n";
	}
	if (r = 0)
	{
		cout << "\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
		cout << "\n\n\tExiting Bill Payment System. Thank you!.\n\n";
		cout << "====================++THANK YOU++============================\n\n";
	}
	system("PAUSE");
};


void ATMAccountHolders::details()
{
	system("cls");


	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\n\nAccount Holder :" << accountHolders << "\n\n";
	cout << "\tAddress :" << accountHoldersAddress << "\n\n";
	cout << "\tThe Branch location is :" << branch << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "Press any key to Return to the Main Menu\n\n";
	system("PAUSE");
}


void ATMAccountHolders::accountExit()
{
	system("cls");


	cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ ATM ACCOUNT EXIT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout << "\n\n\t\t THANK YOU! \n\n";
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	system("PAUSE");
	exit(1);
}




class Limits :public Bank
{
public:
	void SetLimit(double NewLimit)
	{}

	double Getlimit()
	{}

};

int main()
{
	int e;
	ATMAccountHolders p;


	cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ WELCOME TO ATM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout << "\t\t\t--------------------\n" << endl;

	cout << "\t\tCurrent date : ";

	time_t now;
	time(&now);

	//printf("%s\n", ctime(&now));;

	cout << "\t\t\t--------------------\n" << endl;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";


	cout << "\tPress 1 and Pin Number\n\n";
	cout << "\t\t\t\t\t or \n\n";
	cout << "\tPress 0 and to get Help.\n\n";

	int access;
	cin >> access;
	switch (access)
	{
	case 1:
		system("cls"); int i, pin;

		cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT ACCESS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
		cout << "\n\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]\n\n" << endl;
		cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
		cin >> pin;

		system("cls");

		if (pin == 123456)

		{
			system("cls");

			do
			{
				system("cls");

				cout << endl << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM Main Menu Screen \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" << endl << endl;
				cout << "\t\tEnter [1] Deposit" << endl;
				cout << "\t\tEnter [2] Withdraw" << endl;
				cout << "\t\tEnter [3] Check Balance" << endl;
				cout << "\t\tEnter [4] Pay Bills" << endl;
				cout << "\t\tEnter [5] Pay Interest" << endl;
				cout << "\t\tEnter [0] Exit" << endl << endl;
				cout << "\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
				cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

				cin >> e;
				switch (e)
				{
				case 1:
					p.deposit();
					break;
				case 2:
					p.withdraw();
					break;
				case 3:
					p.details();
					break;
				case 4:
					p.payBills();
					break;
				case 5:
					p.interest();
					break;
				case 0:
					p.accountExit();
					break;
				default:cout << "Please Enter the Correct Number Choice" << endl;
				}
			} while (e != 0);

			break;
		}

		else
		{
			system("cls");

			cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb THANK YOU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
			cout << "\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
			cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

			system("PAUSE");
			exit(1);
		}


	case 0:
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT STATUS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "\tEnter a correct pin number to access this acount.\n\n";
		cout << "\t\tThanks for, your choice today!!\n\n";
		cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		system("PAUSE");
		exit(1);
		break;
	}

	system("PAUSE");
	return 0;

};

