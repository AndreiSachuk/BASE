#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m, n, p;

    cout << "Enter numbers of mutants: ";
    cin >> m;
    cout << "Enter percents of mutants add: ";
    cin >> p;
    cout << "Enter numbers death mutants every day: ";
    cin >> n;

    int counter = 0;

    while (m > 0)
    {
        counter++;
        m *= (1 + p / 100);
        m -= n;
    }

    cout << "All zombies are death after " << counter << " days";
    return 0;
}
