//Calc
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a, b; // ����� �������� � ����������
	char s; // s-sign(���� ��������)
	cout << "������� ���������:";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " " << s << " " << b << " = " << a + b << endl; break;
	case '-': cout << a << " " << s << " " << b << " = " << a - b << endl; break;
	case '*': cout << a << " " << s << " " << b << " = " << a * b << endl; break;
	case '/': cout << a << " " << s << " " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
}