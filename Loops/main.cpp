 #include<iostream>
#include<conio.h>
using namespace std;
#define WHILE_1
#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
#ifndef WHILE_1
	int i = 0;
	int n;
	cout << " Введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << "Hello world!";
		cout << "Сам привет!";
		cout << i++ << endl;
	}
#endif // !WHILE_1

	char key;
	do
	{
		key =_getch(); //Функция getch ожидает нажатие клавиши и вовращает ASCII-код нажатой клавиши
		//функция getch объявлена в библиотеке <conio.h>
		cout << (int)key << "\t" <<key<< endl;
		//(unt)key - это явное преобразование пременной key  в тип данных int для того чтобы увидеть ASCII код символа, хранящегося в переменной key

	} while (key != 27);	
}