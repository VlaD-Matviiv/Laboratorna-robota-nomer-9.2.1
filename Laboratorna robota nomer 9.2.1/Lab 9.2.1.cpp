// Lab 9.2.1

#include <iostream>
#include "math_macros.h.cpp"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y, z, w;

    cout << "Ввести знвчення x: ";
    cin >> x;
    cout << "Ввести значення y: ";
    cin >> y;
    cout << "Ввести значення z: ";
    cin >> z;

    if (z > 10) 
    {
        w = MAX (POW(x, 3), POW(x + y, 2));
    }
    else 
    {
        w = MIN (ABS(x - z), ABS(x + z));
    }

    cout << "Результат w = " << w << endl;

    return 0;
}
