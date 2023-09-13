#include <iostream>
#include <string>
using namespace std;
class fecha
{
public:
    fecha(int d, int m, int a):
    dia{d},mes{m},año{a}
    {    
        setMonth(m);
    }
    void setDay(int d)
    {
        if (dia > 0)
        {
            dia = d;
        }
    }
    void setYear(int a)
    {
        if (año > 0)
        {
            año = a;
        }
        
    }
    void setMonth(int m)
    {
        if ((m>=1)&&(m<=12))
        {
            mes = m;
        }
        else
        {
            mes = 1;
        }
    }

    int getDay() const
    {
        return dia;
    }

    int getMonth() const
    {
        return mes;
    }

    int getYear() const
    {
        return año;
    }

    void displaydate() const
    {
        cout<< getDay()<<"/"<< getMonth() <<"/"<< getYear() <<endl;
    }
private:
    int mes;
    int año;
    int dia;
};