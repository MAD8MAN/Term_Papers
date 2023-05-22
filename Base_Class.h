#pragma once
#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
	string Name_PC;
	string IP;
	virtual void Working()=0;
};

class PC_1 :public Base
{
public:
	PC_1()
	{
		Name_PC = "DESKTOP-TDL1LAV";
		IP = "37.65.19.209";
	}
	void Working();
};

class PC_2 :public Base
{
public:
	PC_2()
	{
		Name_PC = "DESKTOP-JN5DEM";
		IP = "162.225.103.74";
	}
	void Working();
};

class PC_3 :public Base
{
public:
	PC_3()
	{
		Name_PC = "DESKTOP-QCN7AWN";
		IP = "205.184.84.223";
	}
	void Working();
};

class PC_4 :public Base
{
public:
	PC_4()
	{
		Name_PC = "DESKTOP-FAC3UOQ";
		IP = "95.236.251.175";
	}
	void Working();
};

class PC_5 :public Base
{
public:
	PC_5()
	{
		Name_PC = "DESKTOP-EZS4ZI";
		IP = "20.120.5.39";
	}
	void Working();
};

class second
{
public:
	Base *base[5];
	PC_1 *pc1 = new PC_1();
	PC_2 *pc2 = new PC_2();
	PC_3 *pc3 = new PC_3();
	PC_4 *pc4 = new PC_4();
	PC_5 *pc5 = new PC_5();
	void sf()
	{
		base[0] = pc1;
		base[1] = pc2;
		base[2] = pc3;
		base[3] = pc4;
		base[4] = pc5;
		int x;
		cout << "Выберите с каким IP-адресом устройства начать взаимодействие: \n";
		for (int i = 0; i < 5; i++)
		{
			cout << "\t\t" << i + 1 << ". " << base[i]->IP << endl;
		}cout << "\t\t6.Выход\n";
		cin >> x;
		if (x == 1)
		{
			base[0]->Working();
		}
		if (x == 2)
		{
			base[1]->Working();
		}
		if (x == 3)
		{
			base[2]->Working();
		}
		if (x == 4)
		{
			base[3]->Working();
		}
		if (x == 5)
		{
			base[4]->Working();
		}
		if (x == 6)
		{
			cout << "Досвидания!";
		}
	}
};
