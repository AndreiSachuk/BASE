/*1) выход, если введена буква
2) выход, если выбран 0 (число, а не символ ‘0’)
3) выход, если введена цифра
4) выход, если введенно число в диапазоне от 1 до 10
5) Игра “УГАДАЙ ЧИСЛО”: компьютер загадывает (константа в программе) число от 1 до 1000. 
Пользователь вводит числа до тех пор, пока не угадает – тогда печатается BINGO!. Компьютер делает подсказки: больше или меньше.*/

#include <iostream>

using namespace std;

int main()
{
    const int CODE = 500;
    int input = 0;

    while (true)
    {
        cout << "Eneter number from 1 to 1000" << endl;
        cin >> input;
        if (input > CODE)
            cout << "Enter less number" << endl;
        else if (input < CODE)
            cout << "Enter more number" << endl;
        else
            break;
    }
    cout << "BINGO!";
    return 0;
}