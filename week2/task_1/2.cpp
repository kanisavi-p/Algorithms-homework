#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, dig, opt, temp;
	int sum, prod, count, max_dig, min_dig;
	char cont;

	// print the menu of options
	cout << "\nSelect an option from [1-7] according to the menu:" << endl;
	cout << "[1]. Enter a number in the range between 1000 and 999 999 999" << endl;
	cout << "[2]. Print the digits of the number" << endl;
	cout << "[3]. Count how many digits the number has" << endl;
	cout << "[4]. Return the lowest and highest digits of the number" << endl;
	cout << "[5]. Return the sum of the digits of the number" << endl;
	cout << "[6]. Return the product of the odd digits" << endl;
	cout << "[7]. Calculate the inverted version of the number" << endl;
	cout << "---------------------------------------------------" << endl;

	do {
		cout << "Enter option: ";
		cin >> opt;
		switch (opt) {
		case 1: // OPTION 01: Enter the number
			cout << "Enter a number: ";
			do {
				cin >> n;
				if (n < 1000 or n > 999999999)
					cout << "The number is out of range.\n";
			} while (n < 1000 or n > 999999999);
			break;
		case 2: // OPTION 02: Check if the number has repeated digits
			cout << "Digits of the number: ";
			temp = n;
			while (temp != 0) {
				cout << temp % 10 << " ";
				temp /= 10;
			}
			cout << endl;
			break;
		case 3: // OPTION 03: Count how many digits the number has repeated digits;
			temp = n;
			count = 0;
			while (temp != 0) {
				count++;
				temp /= 10;
			}
			cout << "The number has " << count << " digits.\n";
			break;
		case 4: // OPTION 04: Return the lowest and highest digits of the number
			temp = n;
			max_dig = 0, min_dig = 9;
			while (temp != 0) {
				dig = temp % 10;
				if (dig >= max_dig)
					max_dig = dig;
				if (dig <= min_dig)
					min_dig = dig;
				temp /= 10;
			}
			cout << "The lowest digit of the number: " << min_dig << endl;
			cout << "The highest digit of the number: " << max_dig << endl;
			break;
		case 5: // OPTION 05: Return the sum of the digits of the number
			temp = n;
			sum = 0;
			while (temp != 0) {
				sum += temp % 10;
				temp /= 10;
			}
			cout << "The sum of the digits of the number = " << sum;
			break;
		case 6: // OPTION 06: Return the product of the odd digits
			temp = n;
			prod = 1;
			while (temp != 0) {
				dig = temp % 10;
				if (dig % 2 != 0)
					prod *= dig;
				temp /= 10;
			}
			cout << "The product of the odd digits = " << prod;
			break;
		case 7: // OPTION 07: Calculate the inverted version of the number
			cout << "Inverted version: ";
			temp = n;
			while (temp != 0) {
				cout << temp % 10;
				temp /= 10;
			}
			cout << endl;
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
