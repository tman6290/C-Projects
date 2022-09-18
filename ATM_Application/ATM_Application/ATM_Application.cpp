// ATM_Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>


using namespace std;


void showMenu() {

	cout << "**********MENU**********" << endl;
	cout << " " << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Withdraw" << endl;
	cout << "3. Deposit" << endl;
	cout << "4. Exit" << endl;
	cout << " " << endl;
	cout << "************************" << endl;
}


int main() {

	// check balance, deposit, withdraw, show menu

	int option;
	double balance = 500;

	do {

		showMenu();

		cout << "Enter option: ";
		cin >> option;
		system("cls");

	    if (cin.fail()) {
		    cin.clear();
		    cin.ignore(100000, '\n');
		    cout << "NOT A NUMBER! TRY AGAIN!" << endl;
		} else if (option != 1 && option != 2 && option != 3 && option != 4) {
			cin.clear();
			cout << "INVALID INPUT! TRY AGAIN" << endl;
			continue;
		}
		
		

		switch (option)
		{

		case 1:
			cout << "You have a balance of: $" << balance << endl;
			break;

		case 2:
			double withdrawAmount;
			cout << "Enter amount to withdraw:";
			cin >> withdrawAmount;

			if (withdrawAmount <= balance) {

				balance -= withdrawAmount;
				cout << "You have withdrawn $" << withdrawAmount << endl;

			}
			else {

				cout << "INSUFFICIENT FUNDS" << endl;
			}

			break;

		case 3:
			double depositAmount;
			cout << "Enter deposit amount: ";
			cin >> depositAmount;
			balance += depositAmount;
			cout << "You have deposited $" << depositAmount << endl;
			break;

		default:
			break;
		}

	} while (option != 4);



}