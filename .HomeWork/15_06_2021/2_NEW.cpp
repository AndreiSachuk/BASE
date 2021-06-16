#include <iostream>
#include <string.h>

using namespace std;

void findNumber(double);

int main()
{
    double input = 0;

    cout << "Enter finding position from 1 to needs ";
    cin >> input;

    findNumber(input);

    return 0;
}

void findNumber(double findNumber)
{
    string strNew;
    int i = 0;
    do
    {
        i++;
        int k = i * i;
        strNew += to_string(k);
    } while (strNew.length() <= findNumber);

    cout << findNumber << " number is " << strNew[findNumber - 1];
}
