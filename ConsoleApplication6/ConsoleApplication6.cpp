// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cmath"
#include "windows.h"
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    double h, y, x;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть значення а:";
    cin >> a;
    cout << "Введіть значення b:";
    cin >> b;
    cout << "Введіть значення h:";
    cin >> h;
    x = a;
    while (x <= b + 0.1) {
        y = pow(sin(x), 2) + 2 * cos(x) + 3;
        cout << setw(10) << "x=" << x << setw(10) << "y=" << y << setw(10) << endl;
        x += h;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
