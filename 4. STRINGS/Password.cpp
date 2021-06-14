#include <iostream>
#include <cstring>

#define PASSWORD "Incubator"
#define PROMPT "Enter password: "

using namespace std;

int main()
{
    char s[128];

    while (true)
    {
        cout << PROMPT;
        cin >> s;
        if (strcmp(s, PASSWORD) != 0)
        {
            puts("Error in password! Try again.");
        } else break;
    }
    cout << "Correct password given";

    return 0;
}
