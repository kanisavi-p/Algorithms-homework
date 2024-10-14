#include <iostream>

using namespace std;

int main1() {
	int A, B, del_a, del_b, sum_del, mult_count, mult_a, sum_b, sum_mult, max_del = 1;

	del_a = 0;   // кол-во делителей A
	del_b = 0;   // кол-во делителей В
	sum_del = 0;  // сумма делителей А и В
	mult_a = 1;   // Произведение нечётных делителей А
	sum_b = 0;    // Сумма чётных делителей В

	// Вводим значения A и B
	cout << "Value of A (from 10 to 1000): ";
	cin >> A;
	cout << "Value of B (from 10 to 1000): ";
	cin >> B;
	
	// Цикл выполняется, пока i не равно максимальному из 2-х значений
	for (int i = 1; i <= max(A,B); i++) {
		if (A % i == 0) {   // Проверяем делимость
			sum_del += i;
			del_a++;
			if (i % 2 != 0)
				mult_a *= i;

		}
		if (B % i == 0) {    // Проверяем делимость
			sum_del += i;
			del_b++;
			if (i % 2 == 0)
				sum_b += i;
		}
		if (A % i == 0 && B % i == 0) {    // Определяем общие делители А и В
			max_del = i;                   // Находим наибольший общий делитель
		}
	}
	mult_count = del_a * del_b;
	sum_mult = mult_a + sum_b;

	cout << "1) Sum of divisors of A and B = " << sum_del << endl;
	cout << "2) Product of the number of A and B's divisors = " << mult_count << endl;
	cout << "3) Sum of product of A's odd divisors and sum of B's even divisors = " <<sum_mult << endl;
	if (max_del == 1)    // Если наибольший общий делитель = 1, то числа простые вместе
		cout << "4) Numbers are prime together" << endl;
	else
		cout << "4) The greatest common divisor of A and B = " << max_del << endl;
	return 0;
}
