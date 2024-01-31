#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define Factorial
#define Stepen_chisla
#define ASCII_tablica

void main()
{
	setlocale(LC_ALL, "");
#ifdef Factorial
	int n;
	int i = 1;
	double f = 1;
	cout << "Введите число для вычисления факториала";  cin >> n;
	while (i <= n)
	{
		cout << i << "! = ";
		f *= i++;
		cout << f << "\n";
	}
#endif // Factorial
#ifdef Stepen_chisla

	double a;
	int n;
	double N=1;
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	int i = 0;
	while (i++ < n)N *= a;
	cout << N << endl;

#endif // Stepen_chisla
#ifdef ASCII_tablica
	cout << "Таблица ASCII - символов:\n";
	int i = 0;
	int n = 256;
	while (i < n)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i++ << " ";
	}

#endif // ASCII_tablica

}