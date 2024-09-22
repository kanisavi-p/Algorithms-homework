#include <iostream>
#include <cmath>

using namespace std;

int main23() {
    setlocale(0, "Rus");    // Русский язык в консоли

    cout << "Задача № 3. Функции\n\n";

    double x, f, g;
    bool error = 0;

    cout << "Введите значение x: ";
    cin >> x;

    // Вычисляем значение функции g(x) в зависимости от заданного значения x
    if (x >= 5)
        g = log(x + 10) - 2;
    else if (x > -1)
        g = sqrt(5 - x) - 2;
    else if (x > -4)
        g = abs(x + 6) / (abs(x + 3) - 3);
    // Выводим сообщение об ошибке, если значение x выходит за допустимые пределы
    else {
        cout << "Невозможно вычислить значение g(x)\n";
        error = 1;
    }

    if (error == 0) {
        cout << "g(x) = " << g << endl;
        // Вычисляем значение функции f(g(x)) в зависимости от значения g
        if (g < -2)
            f = abs(g / (1 - g));
        else if (g <= 1)
            f = pow(g + 2, 2);
        else {
            cout << "Невозможно вычислить значение f(g(x))\n";
            error = 1;
        }

        if (error == 0)
            cout << "f(g(x)) = " << f << endl;   // Выводим окончательный результат, если удалось его вычислить
    }

    return 0;
}
