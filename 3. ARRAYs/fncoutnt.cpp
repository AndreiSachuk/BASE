#include <iostream>

using namespace std;

int digits[10] = {1, 2, 3, 4, 5, 6, 7, 8, 123, 10};

int main()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += digits[i];
    cout << sum;

    return 0;
}
