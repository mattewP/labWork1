#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double a, b;
    
    cout << "Введите длину прямоугольника: ";
    cin >> a;
    
    cout << "Введите ширину прямоугольника: ";
    cin >> b;
    
//qweqwe

    // Проверка на корректность ввода 
    if (a <= 0 || b <= 0) {
        cout << "Ошибка: стороны прямоугольника должны быть положительными числами!" << endl;
        return 1;
    }
    
    // Вычисления
    double area = a * b;                    // Площадь
    double perimeter = 2 * (a + b);          // Периметр
    double diagonal = sqrt(a * a + b * b);   // Диагональ (теорема Пифагора)
    
    // Вывод результатов
    cout << "\nРезультаты вычислений:" << endl;
    cout << "Площадь прямоугольника: " << area << endl;
    cout << "Периметр прямоугольника: " << perimeter << endl;
    cout << "Длина диагонали: " << diagonal << endl;
    
    return 0;
}