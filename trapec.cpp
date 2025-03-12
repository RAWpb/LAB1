
#include <iostream>

int main()
{
    int a, b, c, d, h;
    setlocale(LC_ALL, "");
    std::cout << "Введите стороны трапеции\n";
    std::cin >> a >> b >> c >> d;

    std::cout << "Введите стороны высоту\n";
    std::cin >> h;
    int v;
    std::cout << "Выберите какую операцию совершить\n" << "1. Периметр\n" << "2. Площадь\n" << "3. Длина средней диагонали\n";
    int z;
    std::cin >> z;
    switch (z)
    {
    case(1):
        v = a + b + c + d;
        std::cout << v;
        break;
    case(2):
        v = ((a + b) / 2) * h;
        std::cout << v;
        break;
    case(3):
        v = (a + b) / 2;
        std::cout << v;
        break;

    default:
        break;
    }
}


