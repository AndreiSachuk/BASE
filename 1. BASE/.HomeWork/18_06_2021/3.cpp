/*
3) Dev Incubator :: Case 
Write the fibonacci function and print the n-th number
When n = 100, negative value, why?
How to fix?
*/
#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

double fibonachi(int);

int main()
{
    int findingNumderInFibonachiRow = 0;

    cout << "Enter finding number in fibonachi row ";
    cin >> findingNumderInFibonachiRow;
    cout << findingNumderInFibonachiRow << " number in fibonachi row is " << fibonachi(findingNumderInFibonachiRow);

    return 0;
}

double fibonachi(int inputNumber)
{
    if (inputNumber == 1)
        return 0;
    else if (inputNumber == 2)
        return 1;
    else
        return fibonachi(inputNumber - 1) + fibonachi(inputNumber - 2);
}

/* // Fibonacci by linear algorythm
double fibonachi(int inputNumber)
{
    double firstNumber = 0;
    double secondNumber = 1;
    double fibonachi = 0;
    if (inputNumber == 1)
        fibonachi = firstNumber;
    else if (inputNumber == 2)
        fibonachi = secondNumber;
    else
    {
        for (int i = 3; i <= inputNumber; i++)
        {
            fibonachi = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = fibonachi;
        }
    }
    return fibonachi;
}*/