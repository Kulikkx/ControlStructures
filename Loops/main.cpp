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
	cout << " ������� ���������� ��������:"; cin >> n;
	while (i < n)
	{
		cout << "Hello world!";
		cout << "��� ������!";
		cout << i++ << endl;
	}
#endif // !WHILE_1

	char key;
	do
	{
		key =_getch(); //������� getch ������� ������� ������� � ��������� ASCII-��� ������� �������
		//������� getch ��������� � ���������� <conio.h>
		cout << (int)key << "\t" <<key<< endl;
		//(unt)key - ��� ����� �������������� ��������� key  � ��� ������ int ��� ���� ����� ������� ASCII ��� �������, ����������� � ���������� key

	} while (key != 27);	
}