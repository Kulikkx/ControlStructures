#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "")
	int n;
	int i = 1;
	double f = 1;
	cout << "¬ведите число дл€ вычислени€ факториала";  cin >> n;
	while (i <= n)
	{
		cout << i << "!=";
			f *= i++;
		cout << f << "\n";
	}
}