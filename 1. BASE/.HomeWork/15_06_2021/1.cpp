#include <iostream>

using namespace std;

void findNumber(int);

int main()
{
    int m = 0;

    cout << "Enter number: ";
    cin >> m;

    findNumber(m);

    return 0;
}

void findNumber(int en){
    for (int i = 1; i <= en; i++)
    {
        int k = i;
        while (k % 2 == 1)
        {
            if (k == 1)
                cout << i << " ";
            k = k / 2;
        }
    }
}