#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления длинны окружности
double calcLenght(double r) {
    return (2 * 3.14 * r);
   
}

// Функция для вычисления площади круга
double calcArea(double r) {
    return (r * r * 3.14);
    
}

// Функция для вычисления площади кругового сектора
double calcSecArea(double r, double s) {
    double sector = (360 / s);
    return (r * r * 3.14) / sector;

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
    if ((r < 0) or (361 < s) or (s < 0)) cout << "Неточное значение" << endl;
    else {
        cout << "Длинна окружности: " << lenght << endl;
        cout << "Площадь круга: " << area << endl;
        cout << "Площадь кругового сектора: " << secArea << endl;
    }
    return 0;
}

