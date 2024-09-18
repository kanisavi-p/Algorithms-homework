#include <iostream>

using namespace std;

int main() {

    setlocale(0, "Rus");

    double tax, s;
    char cover, material;
    int floors;
    bool water;

    tax = 0;
    cout << "Площадь участка (m^2): ";
    cin >> s;

    // Вычисляем сумму увеличения налога в зависимости от покрытия
    cout << "Тип покрытия (1 - with roof/ 2 - without roof/ 3 - garden) : ";
    cin >> cover;
    if (cover == '1')
        tax += 5000;
    else if (cover == '2')
        tax += 3000;
    else
        tax += 1000;
    tax *= s;

    // Определяем коэффициент умножения налога в зависимости от материала
    cout << "Материал (1 - high quality/ 2 - adobe/ 3 - other) : ";
    cin >> material;
    if (material == '1')
        tax *= 1.15;
    else if (material == '2')
        tax *= 1.10;
    else
        tax *= 1.05;

    // Увеличиваем налог при наличии воды
    cout << "Наличие воды и канализации (1 - есть / 0 - нет) : ";
    cin >> water;
    if (water == 1)
        tax += 2500;

    // Определяем коэффициент умножения налога в зависимости от количества этажей
    cout << "Количество этажей: ";
    cin >> floors;
    if (floors == 2) 
        tax *= 1.10;
    else if (floors == 3 or floors == 4)
        tax *= 1.15;
    else if (floors > 4)
        tax *= 1.20;

    cout << "\nTax = " << tax << endl;   // Выводим окончательный результат
    return 0;
}
