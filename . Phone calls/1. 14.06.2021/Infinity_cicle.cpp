#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    char c = 0;

    while (true)
    {
        cout << "Your choise? ";
        cin >> c;
        if (c == 'e')
        {
            cout << "Finita la comedia";
            break;
        }
    }
    return 0;
}