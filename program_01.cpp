#include <iostream>

using namespace std;

int main() {

    setlocale(0, "Rus");    // Русский язык в консоли

    double tax, s;
    char cover, material;
    int floors;
    bool water;

    // Вычисляем стоимость налога в зависимости от площади и покрытия участка
    tax = 0;
    cout << "Площадь участка с крышей (м^2): ";
    cin >> s;
    tax += 5000 * s;
    cout << "Площадь участка без крыши (м^2): ";
    cin >> s;
    tax += 3000 * s;
    cout << "Площадь сада (м^2): ";
    cin >> s;
    tax += 1000 * s;

    // Определяем коэффициент умножения налога в зависимости от материала
    cout << "Материал (1 - высокое качество/ 2 - саман/ 3 - другой) : ";
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
