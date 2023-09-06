#include <iostream>
using namespace std;
int main()
{
    int edad{0};
    float ecu1{0}, ecu2{0}, ecu3{0}, ecu4{0}, promedio{0};
    cout<<"ingrese su edad: ";
    cin>> edad;
    ecu1 = 220 - edad;
    ecu2 = 208 - 0.7*edad;
    ecu3 = 207 - 0.7*edad;
    ecu4 = 211 - 0.64*edad;
    promedio = (ecu1+ecu2+ecu3+ecu4)/4;
    cout<<"sus resultados son: " << ecu1<<"lpm "<< ecu1<<"lpm "<< ecu3<<"lpm "<< ecu3<<"lpm "<<"y su promedio es" <<promedio<<"lpm\n";
    if ((edad>=20) && (edad<30))
    {
        if ((promedio>=100) && (promedio<=200))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=30) && (edad<35))
    {
        if ((promedio>=195) && (promedio<=262))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=35) && (edad<40))
    {
        if ((promedio>193) && (promedio<=257))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=40) && (edad<45))
    {
        if ((promedio>=190) && (promedio<=253))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=45) && (edad<50))
    {
        if ((promedio>=188) && (promedio<=249))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=50) && (edad<55))
    {
        if ((promedio>=185) && (promedio<=245))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=55) && (edad<60))
    {
        if ((promedio>=183) && (promedio<=240))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=160) && (edad<65))
    {
        if ((promedio>=80) && (promedio<=265))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=165) && (edad<70))
    {
        if ((promedio>=78) && (promedio<=232))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    if ((edad>=175) && (edad<80))
    {
        if ((promedio>=75) && (promedio<=228))
        {
            cout<<"usted esta sano";
        }
        else
        {
            cout<<"consulte a su medico urgentemente";
        }
        
    }
    return 0;
}