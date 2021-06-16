#include <iostream>
#include <math.h>

using namespace std;

int power2(int);
int main()
{
    int input;
    cout << "Enter bin number: ";
    cin >> input;
    int sum = 0;
    int ost;
    int count = 0;
    while (input != 0)
    {
        ost = input % 10;
        input /= 10;
        if (ost == 1)
            sum += power2(count);
        count++;
    }
    cout << "dec = " << sum;
    return 0;
}

int power2(int num)
{
    int k = 1;
    for (int i = 0; i < num; i++)
        k *= 2;
    return k;
}