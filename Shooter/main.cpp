#include<iostream>
#include<conio.h>
using namespace std;
// ARROW - �������
#define UP_ARROW	72 //Up-�����
#define DOWN_ARROW	80 //Down-����
#define LEFT_ARROW	75 //Left-�����
#define RIGHT_ARROW	77 //Right-������
#define Enter		13
#define Escape		27

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key<<"\t"<<key << endl;
			/* if (key == 'w' || key == 'W'|| key==UP_ARROW)    cout << "������" << endl;
		else if (key == 's' || key == 'S'|| key==DOWN_ARROW)  cout << "�����"  << endl;
		else if (key == 'a' || key == 'A'|| key==LEFT_ARROW)  cout << "�����"  << endl;
		else if (key == 'd' || key == 'D'|| key==RIGHT_ARROW) cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == 13) cout << "�����"  << endl;
		else if (key != 27 && key != -32) cout << "Error" << endl;*/
		switch (key)
		{
		case'W': case'w': case UP_ARROW: cout << "������" << endl; break;
		case'S':case's':case DOWN_ARROW: cout << "�����" << endl; break;
		case'A': case'a':case LEFT_ARROW: cout << "������" << endl; break;
		case'D':case'd':case RIGHT_ARROW: cout << "�������" << endl; break;
		case Escape:cout << "�����"<< endl;
		case -32:break;
		default: cout << "Error" << endl;
	}
	} while (key != 27);

}