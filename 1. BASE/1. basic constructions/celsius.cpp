#include <iostream>

using namespace std;

int main()
{
    double fdegrees = 0.0;
    double cdegrees = 0.0;

    cout << "Fahrengeit to Celsius conversion\n\n";
    cout << "Degrees Fahrengeit? ";
    cin >> fdegrees;
    cdegrees = ((fdegrees - 32.0) * 5.0) / 9.0;
    cout << "Degrees Celsius = " << cdegrees;

    return 0;
}