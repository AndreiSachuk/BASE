//1) РАЗРЯДЫ. Разработайте функцию, которая переворачивает переданное ей целое число: 1234 -> 4321
#include <iostream>
#include <cmath>

using namespace std;

int reverseNumber(int);

int main()
{
    int inputNumber = 0;

    cout << "Enter digit position ";
    cin >> inputNumber;
    cout << "Reversed number is " << reverseNumber(inputNumber);

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

int reverseNumber(int inputNumber)
{
    int oldNumber = inputNumber;
    int reverseNumber = 0;
    for (int i=0; i<digitCount(inputNumber); i++){
        int digit = oldNumber %10;
        reverseNumber += digit * pow(10, digitCount(oldNumber) - 1);
        oldNumber /=10;
    }
    return reverseNumber;
}