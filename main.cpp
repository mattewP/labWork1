#include <iostream>
using namespace std;
int main() {
    int r;
    int a;

    do {
        cout<<"Введите радиус"<<endl;
        cin >> r;
        cout<<"Введите угол в градусах"<<endl;
        cin >> a;
        if (r<=0) {
            cout<<"Радиус должен быть положительным"<<endl;

        }
        cout << "Длинна окружности " << 6.28*r <<endl;
        cout << "Площадь окружности " << 3.14*r*r <<endl;
        cout << "Площадь кругового сектора " << (3.14*r*r*a)/360 <<endl;
    }
    while(r!=0);

    return 0;
}
