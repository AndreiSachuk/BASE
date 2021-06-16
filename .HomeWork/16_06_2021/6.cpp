#include <iostream>
#include "conio.h"

using namespace std;

int search_NOD(int, int);

int main()
{
    int first, second;
    cout << "Input first number: ";
    cin >> first;
    cout << "Input second number: ";
    cin >> second;

    cout << "NOD: " << search_NOD(first, second);
    return 0;
}

int search_NOD(int x, int y)
{
    int count = 0;
    if (x < y)
        count = x;
    else
        count = y;

    for (int i = count; i >= 2; i--)
        if ((x % i == 0) && (y % i == 0))
            return i;
    return 1;
}