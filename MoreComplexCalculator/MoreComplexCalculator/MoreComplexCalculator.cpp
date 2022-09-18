
#include <iostream>
#include <cmath>
using namespace std;

void add() {

	double a;
	double b;
	double result;
	
	cout << "Enter first number:" << endl;
	cin >> a;

	cout << "Enter second number:" << endl;
	cin >> b;

	result = a + b;

	cout << "The answer is " << result << endl;

}

void subtract() {

	double a;
	double b;
	double result;

	cout << "Enter first number:" << endl;
	cin >> a;

	cout << "Enter second number:" << endl;
	cin >> b;

	result = a - b;

	cout << "The answer is " << result << endl;

}

void multiply() {

	double a;
	double b;
	double result;

	cout << "Enter first number:" << endl;
	cin >> a;

	cout << "Enter second number:" << endl;
	cin >> b;

	result = a * b;

	cout << "The answer is " << result << endl;

}

void divide() {

	double a;
	double b;
	double result;

	cout << "Enter first number:" << endl;
	cin >> a;

	cout << "Enter second number:" << endl;
	cin >> b;

	result = a / b;

	cout << "The answer is " << result << endl;

}

void expo() {

	double a;
	double b;
	double result;

	cout << "Enter first number:" << endl;
	cin >> a;

	cout << "Enter second number:" << endl;
	cin >> b;

	result = pow(a, b);

	cout << "The answer is " << result << endl;

}



int main() {

	
	int choice;
	int calcState = 1;
	char calcStateChoice;
	while (calcState == 1) {

		cout << "PLEASE SELECT AN OPERATION: " << endl;
		cout << "Press 1 for ADDITION" << endl;
		cout << "Press 2 for SUBTRACTION" << endl;
		cout << "Press 3 for MULTIPLICATION" << endl;
		cout << "Press 4 for DIVISION" << endl;
		cout << "Press 5 for EXPONENTIATION" << endl;
		

		cin >> choice;

		switch (choice)
		{
		case 1:
			add();
			break;

		case 2:
			subtract();
			break;

		case 3:
			multiply();
			break;

		case 4:
			divide();
			break;

		case 5:
			expo();
			break;
		
		default:
			cout << "INVALID INPUT!"<< endl;
			continue;
		}

		cout << "Would you like to continue? Enter 'Y' for yes or 'N' for no." << endl;
			cin >> calcStateChoice;

			if (calcStateChoice == 'N') {

				calcState = 0;
			};


	};
	
}

