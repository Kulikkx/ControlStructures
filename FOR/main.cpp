#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define factorial
//#define power
//#define Fibanachi
//#define ASCII_tablica
//#define Prostoe_chislo
//#define Tablica_umnozhenia

void main()
{
	setlocale(LC_ALL, "");
#ifdef factorial

	int n;
	cout << "������� ����� ��� ���������� ����������:"; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!= ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // factorial

#ifdef power

	double a; //��������� �������
	int n; //���������� �������
	double N = 1; // �������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < a)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // power
#ifdef Fibanachi

	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
	for (int a - 0, b = 1; a < n; b += a, a = b - a)
		cout << a << "\t";
	cout << endl;
#endif // Fibanachi

#ifdef ASCII_tablica
	cout << "������� ASCII - ��������:\n";
	int i = 0;
	int n = 256;
	for (i % 16 == 0;i < n;i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i++ << " ";
	}
#endif // ASCII_tablica
#ifdef Prostoe_chislo
	int n;
	cout << "������� ������: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true; //������������ ��� ����� �������,�� ����� ��� ���������:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;//�������� ����� ��������� ������� ��������
			}
		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
#endif // Prostoe_chislo
#ifdef Tablica_umnozhenia

	int n = 10;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}
#endif // Tablica_umnozhenia

}