#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    while (number <= 1 or number >= 10)
    {
        cout << "Enter a number from 1 to 10: ";
        cin >> number;
        if (number <= 1 or number >= 10)
        cout << "Incorrect  answer! " <<endl;
    }

    return 0;
}