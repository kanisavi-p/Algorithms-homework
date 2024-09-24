#include <iostream>
#include <cmath>

using namespace std;

const double g = 9.8;    // Задаём константу - ускорение свободного падения

int main() {
    setlocale(0, "Rus");  // Русский язык в консоли

    cout << "Задача № 2. Бросок камня\n";

    double T, x, H, V, alpha, y;

    // Вводим входные данные
    do {
        cout << "\nВведите значение H (высота обрыва): ";
        cin >> H;

        cout << "Введите значение V (начальная скорость камня): ";
        cin >> V;
        if (V <= 0 || H <= 0)
            cout << "Введено недопустимое значение (<= 0).\n";

    } while (H <= 0 || V <= 0);
    cout << "Введите значение alpha: ";
    cin >> alpha;

    // Вычисляем время полёта и положение камня (координаты) по формулам
    T = (V * sin(alpha) / g) * (1 + sqrt(1 + (2 * g * H) / (pow(V, 2) * pow(sin(alpha), 2))));
    x = V * T * cos(alpha);
    y = H + V * T * sin(alpha) - 1 / 2 * g * pow(T, 2);

    cout << "x(T) = " << x << "\ny(T) = " << y << endl;

    return 0;
}
