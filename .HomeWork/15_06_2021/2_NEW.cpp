#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    double input = 0;

    cout << "Enter finding position from 1 to needs ";
    cin >> input;

    string strNew;
    int i = 0;
    do
    {
        i++;
        int k = i * i;
        strNew += to_string(k);
    } while (strNew.length() <= input);

    cout << input << " number is " << strNew[input - 1];
    return 0;
}

