#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    int number;
    cout << "Введите номер вашего билета:"; cin >> number;

    if (number / 100000 + number / 10000 % 10 + number / 1000 % 10 == number / 100 % 10 + number / 10 % 10 + number % 10)
    {
        cout << "Ваш билет счастливый!";
    }
    else
    {
        cout << "Не расстраивайтесь, но ваш билет обычный";
    }
}