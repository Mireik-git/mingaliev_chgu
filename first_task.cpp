#include <iostream>
#include <cmath>
#include <iomanip>  

using namespace std;

int main() {
    double L1, L2, L3;


    cout << "Введите длину первой стороны (L1): ";
    cin >> L1;

    cout << "Введите длину второй стороны (L2): ";
    cin >> L2;

    cout << "Введите длину третьей стороны (L3): ";
    cin >> L3;


    if (L1 + L2 <= L3 || L1 + L3 <= L2 || L2 + L3 <= L1) {
        cout << "Треугольник с такими сторонами не существует!" << endl;
        return 1; 
    }

   
    double p = (L1 + L2 + L3) / 2;


    double area = sqrt(p * (p - L1) * (p - L2) * (p - L3));


    cout << fixed << setprecision(2);
    cout << "Площадь треугольника: " << area << endl;

    return 0;
}