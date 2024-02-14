// Lab1_houdongpan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	cout << "Factorial:" << endl;
	int factorial = 1;
	int n;
	cout << "Enter a number: ";
	cin >> n;
	while (n < 0) {
		cout << "Nice try,please enter a POSITIVE number:";
		cin >> n;
	}
	cout << n << "! = ";
	for (int i = 1; i <= n; i++) {
		factorial =  factorial * i;
		cout << i << (i < n ? " * " : " = ");
	}
	cout << factorial << endl;
}
void arithmetic() {
	cout << "Arithmetic Series:" << endl;
	int start;
	cout << "Enter a number to start:";
	cin >> start;
	int add;
	cout << "Enter a number to add each time: ";
	cin >> add;
	int n;
	cout << "Enter the number of elements in the series: ";
	cin >> n;
	if (n <= 0) {
		cout << "Nice try,please enter a POSITIVE number:" << endl;
		cin >> n;
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += start + i * add;
		cout << start + i * add << (i < n - 1 ? " + " : " = ");
	}
	cout << sum << endl;
}
void geometric () {
	cout << "Geometric series: "<<endl ;
	int r ;
	cout << "Enter a number to start:";
	cin >> r;
	int a;
	cout << "Enter a number to multiply each time:";
	cin >> a;
	int n;
	cout << "Enter the number of elements in the series: ";
	cin >> n;

	if (n < 0) {
		cout << "Nice try,please enter a POSITIVE number:" << endl;
		cin >> n;
	}

	int num = r ; 
	int sum = 0;

	for (int i = 0; i < n; i++) {
		if (i > 0) { 
			num = num * a ;
		}
		cout << num  << (i < n - 1 ? "+ " : "=");
		sum += num ;
	}
	cout << sum << endl ;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 4 || choice < 1) {
			cout << "Invalid choice." << endl;
			break;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		else if (choice == 4) {
			cout << "Exiting program." << endl ;
			break;
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
	return 0;
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
