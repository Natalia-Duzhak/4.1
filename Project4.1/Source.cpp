#include "HourlyPayment.h"
#include "Salary.h"
#include <Windows.h> 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Cлужбовець з погодинною оплатою : " << endl;
	HourlyPayment A(12,4,75,500);
	A.Print();
    cout << "Опалата за кількість відпрацьованих годин = " << A.salary() << "грн" << endl;
	cout << endl << endl;

	cout << "Cлужбовець з окладом : " << endl;
	Salary B(12,20,75,450);
	B.Print();
	cout << "Оплата за кількість відпрацьованих днів = " << B.salary() <<"грн"<< endl;
	cout << endl << endl;
	

	Employee* pa = new HourlyPayment();
	Employee* pb = new Salary();
	

	cout << typeid(pa).name() << endl;
	cout << typeid(*pa).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(*pb).name() << endl;


	delete pa,delete pb;
	

	Employee* N[2];

	N[0] = &A;
	N[1] = &B;
	

	cout << "Perimter of N[0] = " << N[0]->salary() << endl;
	cout << "Square of N[1] = " << N[1]->salary() << endl;
	
}