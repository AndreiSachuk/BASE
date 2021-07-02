#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    cout << "Quadratic equation finder " << endl;
    cout << "(c) Andrei Sachuk, 2021. Version 1.0" << endl
         << endl;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "Error! a = 0";
        return 1;
    }

    double d = b * b - 4 * a * c;
    double x1 = 0.0;
    double x2 = 0.0;

    if (d < 0)
    {
        cout << "No roots";
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        cout << "x1 = x2 = " << x1;
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2;
    }

    return 0;
}