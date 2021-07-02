#include <iostream>

using namespace std;

int main()
{

    int c;

    cout << "do-while alphabet" << endl;
    c = 128;
    do
    {
        cout << (char)c << " ";
        c++;
    } while (c <= 159);

    return 0;
}