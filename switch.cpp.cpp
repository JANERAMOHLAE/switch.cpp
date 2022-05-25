// switch.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double number1, secondnumber, results;
	int calculationtype;

	cout << "enter two numbers" << endl;
	cin >> number1, secondnumber;

	cout << "enter the type of calculation you want" << endl;
	cout << "1:addition" << endl;
	cout << "2:multiplication" << endl;
	cout << "3:subtraction" << endl;
	cout << "4:division" << endl;
	cin >> calculationtype;


	switch (calculationtype) {
	case 1:

		results = number1 + secondnumber; {;};

		cout << "addition of " << number1 << "and" << secondnumber << "is equal to" << results << endl;
		break;

	case 2:
		results = number1 * secondnumber;
		cout << "multiplication of " << number1 << "by" << secondnumber << "is equal to" << results << endl;
		break;

	case 3:
		results = number1 - secondnumber;
		cout << "subtraction of " << number1 << "from" << secondnumber << "is equal to" << results << endl;
		break;

	case 4:
		if (secondnumber == 0) {
			cout << "you cant divide by zero please enter another number" << endl;
			cin >> secondnumber;
		}

		results = number1 / secondnumber;

		cout << "division of" << number1 << "by" << secondnumber << " is equal to " << results << endl;
		break;

	default:

		cout << "invalid calculationtype  was selected please select another one" << endl;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
