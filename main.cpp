#include "Base_Class.h"
using namespace std;

void main()
{
	system("chcp 1251>NULL");
	int x;
	Sun_System *ss[8];
	Mercury *s1 = new Mercury();
	Venus *s2 = new Venus();
	Earth *s3 = new Earth();
	Mars *s4 = new Mars();
	Jupiter *s5 = new Jupiter();
	Saturn *s6 = new Saturn();
	Uranus *s7 = new Uranus();
	Neptune *s8 = new Neptune();
	ss[0] = s1;
	ss[1] = s2;
	ss[2] = s3;
	ss[3] = s4;
	ss[4] = s5;
	ss[5] = s6;
	ss[6] = s7;
	ss[7] = s8;
	cout << "Выберите одну из планет: \n";
	for (int i = 0; i < 8; i++)
	{
		cout <<i+1<<"."<< ss[i]->Name << endl;
	}
	cin >> x;
	for (int i = 0; i < 8; i++)
	{
		if (x == i + 1)
		{
			ss[i]->output();
		}
	}
	cin.ignore();
	cin.get();
}
