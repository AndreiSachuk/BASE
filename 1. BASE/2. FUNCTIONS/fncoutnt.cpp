#include <iostream>

using namespace std;

void CountUp(int);
void CountDown(int);

int main()
{
    CountUp(100);
    CountDown(20);

    return 0;
}

void CountUp(int r)
{
    cout << endl << endl << "Couting up to "<< r << endl;
    for (int i = 1; i <= r; i++)
        cout << i << " ";
}

void CountDown(int r)
{
    cout << endl << endl << "Couting down to "<< r << endl;
    for (int i = r; i >= 1; i--)
        cout << i << " ";
}