#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char fileName[128];

    cout << "Enter file name: ";
    cin >> fileName;
    cout << "As entered: " << fileName << endl;
    if (strchr(fileName, '.'))
        cout << "File name is probably complete" << endl;
    else
        strcat(fileName, ".txt");

    cout << "Final file name: " << fileName << endl;

    return 0;
}
