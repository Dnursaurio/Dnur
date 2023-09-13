#include <string>
#include <iostream>
using namespace std;
class motordecehiculo
{
public:
    explicit motordecehiculo(string mk, string tc, int am):
    make{mk},tipodeconbustible{tc},añodemnufactura{am},capacidaddelmotor{capacidaddelmotor}
    {
        
    }

    void setMake(string mk)
    {
        make = mk;
    }

    void setTipocombus(string tc)
    {
        tipodeconbustible = tc;
    }

    void setañonan(int am)
    {
        if (añodemnufactura > 0)
        {
            añodemnufactura = am;
        }
    }

    void setColor(string color)
    {
        color = color;
    }

    void setCapmotor(int capacidaddelmotor)
    {
        if (capacidaddelmotor > 0)
        {
            capacidaddelmotor = capacidaddelmotor;
        }  
    }

    

    string getMake() const
    {
        return make;
    }

    string getTipoCombus() const
    {
        return tipodeconbustible; 
    }

    int getañoman() const
    {
        return añodemnufactura;
    }

    string getColor() const
    {
        return color;
    }

    int getCapMotor() const
    {
        return capacidaddelmotor;
    }

    void displaycardetails() const
    {
        cout<<"la marca de tu cehiculo es: "<< getMake()<<"\nel tipo de combustible es: "<< getTipoCombus()<<"\nes año de manufactura es:" << getañoman()<<"\nel color de su vehiculo es: "<< getColor()<< "\nla capacidad de su motor es: "<< getCapMotor() << endl;
    }
private:
    string make;
    string tipodeconbustible;
    int añodemnufactura;
    string color;
    int capacidaddelmotor;
};