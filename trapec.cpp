
#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d, h;
    setlocale(LC_ALL, "");
    cout << "Введите стороны трапеции\n";
    cin >> a >> b >> c >> d;
    cout << "Введите высоту\n";
    cin >> h;
    if(a<0||b<0||c<0||d<0||h<0){
    cout << "Было введено отрицательное число";
    return 0;}
    double v;
    cout << "Выберите какую операцию совершить\n" << "1. Периметр\n" << "2. Площадь\n" << "3. Длина средней диагонали\n";
    int z;
    cin >> z;
    switch (z)
    {
    case(1):
        v = a + b + c + d;
        cout << "периметр - " << v;
        return 0;
    case(2):
        v = ((a + b) / 2) * h;
        cout << "площадь - " << v;
        return 0;
    case(3):
        v = (a + b) / 2;
        cout << "средняя линия - " << v;
        return 0;

    default:
        break;
    }
}


