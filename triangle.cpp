#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double a, b, c;

    cout << "Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double P = a + b + c;
        cout << "Периметр: " << P << endl;

        double S = sqrt((P / 2) * ((P / 2) - a) * ((P / 2) - b) * ((P / 2) - c));
        cout << "Площадь: " << S << endl;

        if (a == b || a == c || b == c) {
            cout << "Треугольник равнобедренный" << endl;
        }
        else {
            cout << "Треугольник не равнобедренный" << endl;
        }
    }
    else {
        cout << "Треугольник не существует!" << endl;
    }

    return 0;
}