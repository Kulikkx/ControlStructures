#include<iostream>
using namespace std;
//#define TEMPERATURE
//#define CALC_1
void main()
{

	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	cout << "Hello Controls" << endl;
	int temperature;
	cout << "������� ������������ �������:"; cin >> temperature;
	cout << "����������� �������:" << temperature << "��������\n";
	if (temperature > 70)
	{
		cout << "�� ������ �������" << endl;
	}
	else if (temperature > 40)
	{
		cout << "�� ����� �������" << endl;
	}
	else if (temperature > 33)
	{
		cout << "�� ����� ����� �����" << endl;

	}
	else if (temperature > 18)
	{
		cout << "�����" << endl;

	}
	else if (temperature > 0)
	{
		cout << "���������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�� ����� �������" << endl;
	}
#endif//TEMP
	#ifdef CALC_1
	double a, b; //�����,�������� � ����������
	char s; // s -sign (���� ��������)
	cout << "������� ���������:";
	cin >> a >> s >> b;
	cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << "+" << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << s << "-" << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << " = " << a / b << endl;

	}
	#endif// CALC_1

	double a, b;
	char s;
	cout << "������� ���������:";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':cout << a << "/" << b << "=" << a / b << endl; break;
	default:cout << "Error: no operation" << endl;
	}
}