#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    double miles;
    char string[128];

    cout << "Convert miles to kilometers" << endl;
    cout << "How many miles? ";
    cin >> string;
    miles = atof(string);
    cout << "kilometers = " << miles * 1.609344 << endl;
    return 0;
}
