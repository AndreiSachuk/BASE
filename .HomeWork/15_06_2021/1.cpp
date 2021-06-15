#include <iostream>

using namespace std;

int main()
{

    int m = 0;

    cout << "Enter number: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int k = i;
        while (k % 2 == 1)
        {
            if (k == 1)
                cout << i << " ";
            k = k / 2;
        }
    }
    return 0;
}
