#include <iostream>

using namespace std;

int main() {

	// using double for floating number
	double number1, number2, result;
	char operation;

	cout << "Welcome to the calculator" << "\n";
	cout << "Enter first number: ";
	// get first number
	cin >> number1;
	cout << endl;

	cout << "Choose operation" << endl;
	cout << "[ + ] Add" << endl;
	cout << "[ - ] Subtract" << endl;
	cout << "[ * ] Multiplication" << endl;
	cout << "[ / ] Divide" << endl;
	// get operator
	cin >> operation;

	cout << "Enter second number: ";
	// get second number
	cin >> number2;
	cout << endl;

	// using switch method
	switch (operation)
	{
	case '+':
		result = number1 + number2;
		cout << number1 << operation << number2 << "= " << result;
		break;
	case '-':
		result = number1 - number2;
		cout << number1 << operation << number2 << "= " << result;
		break;
	case '*':
		result = number1 * number2;
		cout << number1 << operation << number2 << "= " << result;
		break;
	case '/':
		result = number1 / number2;
		cout << number1 << operation << number2 << "= " << result;
		break;
	default:
		cout << "Not valid operation!!!";
		break;
	}

	// using if else statement
	/*if (operation == '+')
	{
		result = number1 + number2;
		cout << number1 << operation << number2 << "= " << result;
	}
	else if (operation == '-')
	{
		result = number1 - number2;
		cout << number1 << operation << number2 << "= " << result;
	}
	else if (operation == '*')
	{
		result = number1 * number2;
		cout << number1 << operation << number2 << "= " << result;
	}
	else if (operation == '/')
	{
		result = number1 / number2;
		cout << number1 << operation << number2 << "= " << result;
	}
	else
	{
		cout << "Not valid operation!!!";
	}*/
	

	cin.get();
	return 0;
}

