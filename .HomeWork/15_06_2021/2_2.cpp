#include <iostream>
#include <cmath>

using namespace std;

void findDigit(int);

int main()
{
    int digitPosition = 0;

    cout << "Enter digit position ";
    cin >> digitPosition;
    findDigit(digitPosition);

    return 0;
}

int digitCount(int number)
{
    int digitCounter = 0;
    while (true)
    {
        digitCounter++;
        number /= 10;
        if (number == 0)
            return digitCounter;
    }
}

int getDigitFromNumber(int number, int posititon)
{
    int k = pow(10, (digitCount(number) - posititon));
    return number / k % 10;
}

void findDigit(int digitPosition)
{
    int count = 0;
    for (int i = 1; i <= digitPosition; i++)
    {
        int number = pow(i, 2);
        for (int positionInNumber = 1; positionInNumber <= digitCount(number); positionInNumber++)
        {
            int digitInNumber = getDigitFromNumber(number, positionInNumber);
            count++;
            if (count == digitPosition)
            {
                cout << digitPosition << " digit is " << digitInNumber;
                return;
            }
        }
    }
}