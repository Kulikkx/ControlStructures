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
	cout << "Введите температтуру воздуха:"; cin >> temperature;
	cout << "Температура воздуха:" << temperature << "градусов\n";
	if (temperature > 70)
	{
		cout << "На другой планете" << endl;
	}
	else if (temperature > 40)
	{
		cout << "На улице пустыня" << endl;
	}
	else if (temperature > 33)
	{
		cout << "На улице очень жарко" << endl;

	}
	else if (temperature > 18)
	{
		cout << "Тепло" << endl;

	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "На улице холодно" << endl;
	}
#endif//TEMP
	#ifdef CALC_1
	double a, b; //числа,вводимые с клавиатуры
	char s; // s -sign (знак операции)
	cout << "Введите выражение:";
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
	cout << "Введите выражение:";
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