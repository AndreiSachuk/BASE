#include <iostream>
#include <cmath>

using namespace std;

void findNumber(int);
int digitCount(int);

int main()
{
    int input = 0;

    cout << "Enter digit position ";
    cin >> input;

    findNumber(input);

    return 0;
}

int digitCount(int number)
{
    int countNum = number;
    int digitCounter = 0;
    while (true)
    {
        digitCounter++;
        countNum /= 10;
        if (countNum == 0)
        {
            break;
        }
    }
    return digitCounter;
}

void findNumber(int findNumber)
{
    int count = 0;
    int number = 0;
    int numberNew = 0;
    for (int i = 1; i < findNumber+1; i++)
    {
        number = i * i;
        for (int j = 0; j < digitCount(number); j++)
        {
            int k = pow(10, (digitCount(number) - (j + 1)));
            int m = pow(10, 1);
            numberNew = number / k;
            numberNew = numberNew % m;
            do
            {
                count++;
                if (count == findNumber)
                {
                    cout << findNumber << " digit is " << numberNew;
                    return;
                }
                numberNew /= 10;
            } while (numberNew > 0);
        }
    }
}