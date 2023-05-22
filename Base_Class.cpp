#include "Base_Class.h"
using namespace std;

void Sun_System::output()
{
	cout <<"Название: "<<Name << endl;
	cout << "Температура: " << Temperature << endl;
	cout << "Место положения в СС: " << Location << endl;
	cout << "Размер: " << Size << endl;
	cout << "Скорость: " << Speed;
}
