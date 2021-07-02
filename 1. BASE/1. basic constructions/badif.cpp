#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    while (number < 1 or number > 10)
    {
        cout << "Value (1..10)? ";
        cin >> number;
        if (number >= 1)
        {
            if (number > 10)
                cout << "Error number >10 \n";
        }
        else
            cout << "Error number <1 \n";
    }

    return 0;
}