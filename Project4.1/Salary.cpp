#include "Salary.h"
Salary::Salary()
    : Employee(0, 0, 0, 0)
{}

Salary::Salary(int hours, int days, int perhour, int perday)
    : Employee(hours, days, perhour, perday)
{}
double Salary::salary()
{
    double SPD = GetDays() * GetPerday();
    return SPD;
}
void Salary::Print()
{
    
    cout << "Кількість відпрацьованих днів: " << GetDays() << endl;
    cout << "Оплата за день : " << GetPerday() << endl;
}