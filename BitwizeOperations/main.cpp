#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, " ");
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	/*a ^= b;
	b ^= a;
	a ^= b;*/
	b ^= a ^= b ^= a;
	cout << a << "\t" << b << endl;
}