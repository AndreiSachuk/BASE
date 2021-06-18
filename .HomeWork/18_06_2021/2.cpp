//УГАДАЙ ЧИСЛО. С помощью функций разработайте игру: компьютер загадывает число и выдает подсказки ("больше-меньше") пользователю.
//Уточним задание 2 задачи: компьютер загадывает число в диапазоне [1..1000]
#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int checkNumber(int, int);


int main()
{
    srand(time(NULL));
    int hiddenNumber = rand() % 1000 + 1;
    int estimatedNumber = 0;
    cout << hiddenNumber << endl;
    do
    {
        cout << "Enter estimated number ";
        cin >> estimatedNumber;
    } while (checkNumber(estimatedNumber, hiddenNumber) != 0);

    return 0;
}

int checkNumber(int inputNumber, int hiddenNumber)
{
    if (inputNumber>hiddenNumber){
        cout << "Hidden number less than " << inputNumber << endl;
        return 1;
    } else if (inputNumber<hiddenNumber){
        cout << "Hidden number more than " << inputNumber << endl;
        return 2;
    } else cout << "Hidden number is " << inputNumber<<". You WIN!";
    return 0;
}