#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления длинны окружности
double calcLenght(double r) {
    if (r > 0) return (2 * 3.14 * r);
    else return 0;
}

// Функция для вычисления площади круга
double calcArea(double r) {
    if (r > 0) return (r * r * 3.14);
    else return 0;
}

// Функция для вычисления площади кругового сектора
double calcSecArea(double r, double s) {
    double sector = (360 / s);
    if (r > 0 and s > 0)
    return (r * r * 3.14) / sector;
    else return 0;
}


int main() {
    double r, s;

    // Ввод данных
    cout << "Введите радиус окружности и значение кругового сектора в градусах (360 для целого круга)";
    cin >> r >> s;

    // Вычисления
    double lenght = calcLenght(r);
    double area = calcArea(r);
    double secArea = calcSecArea(r, s);

    // Вывод результатов
    cout << "Длинна окружности: " << lenght << endl;
    cout << "Площадь круга: " << area << endl;
    cout << "Площадь кругового сектора: " << secArea << endl;

    return 0;
}

