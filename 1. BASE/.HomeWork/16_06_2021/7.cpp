#include <iostream>
#include "conio.h"

using namespace std;
void death(int, int, int, int);

int main()
{
    int firstX, firstY, secondX, secondY;
    cout << "Enter first hourse x and y: ";
    cin >> firstX >> firstY;
    cout << "Enter second hourse x and y: ";
    cin >> secondX >> secondY;
    death(firstX, firstY, secondX, secondY);
}

void death(int x1, int y1, int x2, int y2)
{
    if ((x1 - 2) == x2 and (((y1 + 1) == y2) or ((y1 - 1) == y2)))
        cout << "death";
    else if ((x1 - 1) == x2 and (((y1 + 2) == y2) or ((y1 - 2) == y2)))
        cout << "death";
    else if ((x1 + 1) == x2 and (((y1 + 2) == y2) or ((y1 - 2) == y2)))
        cout << "death";
    else if ((x1 + 2) == x2 and (((y1 + 1) == y2) or ((y1 - 1) == y2)))
        cout << "death";
    else
        cout << "No intersections";
}