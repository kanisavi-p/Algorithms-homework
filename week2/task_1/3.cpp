#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, opt;
	double x, last_term, temp;
	long double result = 0.0;
	char cont;

	// print the menu of options
	cout << "\nSelect an option from [1-6] according to the menu:" << endl;
	cout << "[1]. Enter a value of variable x and a number n" << endl;
	cout << "[2]. Maclaurin series for exponential function e^x" << endl;
	cout << "[3]. Maclaurin series for ln(1 + x)" << endl;
	cout << "[4]. Maclaurin series for sin(x)" << endl;
	cout << "[5]. Maclaurin series for cos(x)" << endl;
	cout << "[6]. Maclaurin series for a rational function 1/(1 - x)^2" << endl;
	cout << "---------------------------------------------------" << endl;

	do {
		cout << "Enter option: ";
		cin >> opt;
		switch (opt) {
		case 1: // OPTION 01: Enter the numbers x and n
			cout << "Enter a value of a variable x: ";
			cin >> x;
			cout << "Enter a number of members n of the maclaurin series (2 to 20): ";
			do {
				cin >> n;
				if (n < 2 or n > 20)
					cout << "The number is out of range.\n";
			} while (n < 2 or n > 20);
			break;
		case 2: // OPTION 02: Maclaurin series for exponential function e^x
			last_term = 1;
			result = last_term;

			cout << "Serie terms: " << endl;
			cout << last_term << " ";
			for (int i = 1; i <= n; i++) {
				last_term *= x / i;
				cout << last_term << " ";
				result += last_term;
			}

			cout << "\nFinal result: " << endl;
			cout << "e^" << x << " = " << result << endl;
			break;
		case 3: // OPTION 03: Maclaurin series for ln(1 + x) 
			while (x > 1 || x <= -1) {
				cout << "Value of x is out of range.\n";
				cout << "Enter the value of x (-1 < x <= 1): ";
				cin >> x;
			}
			last_term = x;
			result = last_term;

			cout << "Serie terms: " << endl;
			cout << last_term << " ";
			for (int i = 2; i <= n; i++) {
				last_term *= -1 * x / i;
				cout << last_term << " ";
				result += last_term; 
			}

			cout << "\nFinal result: " << endl;
			cout << "ln(1 + " << x << ") = " << result << endl;
			break;
		case 4: // OPTION 04: Maclaurin series for sin(x)
			temp = x;
			if (abs(x) > 2 * M_PI)
				temp = x - (int(x / (2*M_PI))) * (2*M_PI);
			last_term = temp;
			result = temp;

			cout << "Serie terms: " << endl;
			cout << last_term << " ";
			for (int i = 1; i < n; i++) {
				last_term *= -1 * (temp * temp) / ((2 * i) * (2 * i + 1));
				cout << last_term << " ";
				result += last_term;
			}

			cout << "\nFinal result: " << endl;
			cout << "sin(" << x << ") = " << result << endl;
			break;
		case 5: // OPTION 05: Maclaurin series for cos(x)
			temp = x;
			if (abs(x) > 2 * M_PI)
				temp = x - (int(x / (2 * M_PI))) * (2 * M_PI);
			last_term = 1;
			result = last_term;

			cout << "Serie terms: " << endl;
			cout << last_term << " ";
			for (int i = 1; i < n; i++) {
				last_term *= -1 * (temp * temp) / ((2 * i - 1) * (2 * i));
				cout << last_term << " ";
				result += last_term;
			}

			cout << "\nFinal result: " << endl;
			cout << "cos(" << x << ") = " << result << endl;
			break;
		case 6: // OPTION 06: Maclaurin series for a rational function 1/(1 - x)^2
			while (x >= 1 || x <= -1) {
				cout << "Value of x is out of range.\n";
				cout << "Enter the value of x (-1 < x < 1): ";
				cin >> x;
			}
			last_term = 1;
			result = last_term;

			cout << "Serie terms: " << endl;
			cout << last_term << " ";
			for (int i = 1; i < n; i++) {
				last_term *= x * (i+1) / i;
				cout << last_term << " ";
				result += last_term;
			}

			cout << "\nFinal result: " << endl;
			cout << "1/(1 - " << x << ")^2 = " << result << endl;
			break;
		}
		// Request to user continue or not
		cout << "\nDo you want continue [Y|N]? " << endl;

		cin >> cont;
		cout << endl;
	} while (cont == 'y' || cont == 'Y');
	cout << "\n The program is over!" << endl;
	return 0;
}
