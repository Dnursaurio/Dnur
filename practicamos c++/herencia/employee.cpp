#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Employee.h"
using namespace std;

comissionemployee::comissionemployee(const string& fn, const string& ln, const string& ssc, double gross, double comission)
{
    Firstname = fn;
    lastname = ln;
    socialsecuritynumber = ssc;
    SetGrossSales(gross);
    SetComissionRate(comission);
}

void comissionemployee::SetFirstName(const string& fn)
{
    Firstname = fn;
}

string comissionemployee::GetFirstName()const
{
    
}
