#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int input, sum = 0, summore = 0;
    cout << "Enter your birthday date one number: ";
    cin >> input;

    while (input != 0)
    {
        sum += input % 10;
        input /= 10;
    }
    if (sum > 10)
    {
        while (sum != 0)
        {
            summore += sum % 10;
            sum /= 10;
        }
        cout << "your lucky number = " << summore;
    } else
        cout << "your lucky number = " << sum;

    return 0;
}
