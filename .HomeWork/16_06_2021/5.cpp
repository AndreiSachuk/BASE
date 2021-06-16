#include <iostream>
#include "conio.h"

using namespace std;

int search_NOK(int, int);

int main()
{
    int first, second;
    cout << "Input first number: ";
    cin >> first;
    cout << "Input second number: ";
    cin >> second;

    cout << "NOK: " << search_NOK(first, second);
    return 0;
}

int search_NOK(int x, int y)
{
    int count = 0;
    if (x < y)
        count = x;
    else
        count = y;

    for (int i = 2; i <= count; i++)
        if ((x % i == 0) && (y % i == 0))
            return i;
    return 1;
}