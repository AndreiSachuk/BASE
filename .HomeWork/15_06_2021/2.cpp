#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    double input = 0;

    cout << "Enter number: ";
    cin >> input;

    string str = to_string(input);
    string strNew;

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '.')
        {
            count++;
            strNew += str[i];
        }
        else
            break;
    }
    cout << "Enter position from 1 to " << count << " ";

    int findingPosition = 0;
    cin >> findingPosition;
    cout << strNew << endl;
    cout << findingPosition << " number is " << strNew[findingPosition - 1];
    return 0;
}