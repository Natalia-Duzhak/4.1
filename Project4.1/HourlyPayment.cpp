#include "HourlyPayment.h"

HourlyPayment::HourlyPayment()
    : Employee(0,0,0,0)
{}

HourlyPayment::HourlyPayment(int hours, int days, int perhour, int perday)
    : Employee( hours, days, perhour, perday)
{}
double HourlyPayment::salary()
{
    double SPH = GetHours() * GetPerhour();
    return SPH;
}
void HourlyPayment::Print()
{
    cout << "Кількість відпрацьованих годин : " << GetHours() << endl;
    cout << "Оплата за годину : " << GetPerhour() << endl;
}