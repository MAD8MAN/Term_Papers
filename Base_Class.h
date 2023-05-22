#include <iostream>
#include <string>
using namespace std;

class Sun_System
{
public:
	string Name;
	string Temperature;
	string Location;
	string Size;
	string Speed;
	void output();
};

class Mercury :public Sun_System
{
public:
	Mercury()
	{
		Name = "Меркурий";
		Temperature = "349,9 °C";
		Location = "1";
		Size = "4 876 км";
		Speed = "48 км/с";
		void output();
}
};

class Venus:public Sun_System
{
public:
	Venus()
	{
		Name = "Венера";
		Temperature = "462 °C";
		Location = "2";
		Size = "12 103, 6 км";
		Speed = "35,02 км/с";
		void output();
	}
};

class Earth :public Sun_System
{
public:
	Earth()
	{
		Name = "Земля";
		Temperature = "14,8 °C";
		Location = "3";
		Size = "6378,14 км";
		Speed = "11,2 км/с";
		void output();
	}
};

class Mars : public Sun_System
{
public:
	Mars()
	{
		Name = "Марс";
		Temperature = "-63,1 °C";
		Location = "4";
		Size = " 3374,9 км";
		Speed = "24,1 км/c";
		void output();
	}
};

class Jupiter :public Sun_System
{
public:
	Jupiter()
	{
		Name = "Юпитер";
		Temperature = "-108 °C";
		Location = "5";
		Size = "142 984 км";
		Speed = "13,1 км/c";
		void output();
	}
};

class Saturn :public Sun_System
{
public:
	Saturn()
	{
		Name = "Сатурн";
		Temperature = "-139 °C";
		Location = "6";
		Size = "58 232 км";
		Speed = "9,68 км/c";
		void output();
	}
};

class Uranus :public Sun_System
{
public:
	Uranus()
	{
		Name = "Уран";
		Temperature = "-195°C";
		Location = "7";
		Size = "50 724 км";
		Speed = "6,8 км/c";
		void output();
	}
};

class Neptune :public Sun_System
{
public:
	Neptune()
	{
		Name = "Нептун";
		Temperature = "-201 °C";
		Location = "8";
		Size = "49528 км";
		Speed = "5,4349 км/с";
		void output();
	}
};
