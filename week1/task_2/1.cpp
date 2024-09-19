#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159;    // Задаём константу - число Пи

int main21() {
    setlocale(0, "Rus");    // Русский язык в консоли

    cout << "Задача № 1. Математический маятник\n\n";

    double omega, k, A, phi, T, x;

    // Вводим входные данные
    cout << "Введите значение omega (частота маятника): ";
    cin >> omega;
    cout << "Введите значение коэффициента k: ";
    cin >> k;
    cout << "Введите значение A (амплитуда): ";
    cin >> A;

    // Вычисляем значения параметров phi и T для конечной формулы
    phi = asin(1 / k);
    T = (pi / 2 - phi) / omega;

    // Вычисляем окончательный результат x(T)
    x = A * sin(omega * T + phi);

    cout << "x(T) = " << x << endl;

    return 0;
}
