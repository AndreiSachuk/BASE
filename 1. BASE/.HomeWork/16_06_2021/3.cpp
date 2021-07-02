#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    int j = 1;

    for (i = 1; i <= 10; i++)
    {
        while (j <= 10)
        {
            cout << setw(4) << i * j ;
            j++;
        }
        cout<<endl;
        j = 1;
    }

    return 0;
}
