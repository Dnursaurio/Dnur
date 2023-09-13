#include <iostream>
#include <string>
using namespace std;
class init
{
public:
    init(unsigned int s, string nom, string apell, double nro):
    saldo{s},nombre{nom},apellido{apell},nrodecuenta{nro}
    {

    }
    void setSaldo(unsigned int s)
    {
        if (s>0)
        {
            saldo = s;
        }
    }
    unsigned int getNro() const
    {
        return saldo;
    }
    void setNombre(string nom)
    {
        nombre = nom;
    }
    string getNombre() const
    {
        return nombre;
    }
    void setApellido(string apell)
    {
        apellido = apell;
    }
    string getApellido() const
    {
        return apellido;
    }
    void setNrodeCuenta(double nro)
    {
        if (nro > 0)
        {
            nrodecuenta = nro;
        }
    }
    double getNrodeCuenta() const
    {
        return nrodecuenta;
    }
    void displayaccount() const
    {
        cout<< "su nro de cuenta es: "<<getNrodeCuenta()<<"\nsu nombre de la cuenta es: "<< getNombre()<<" "<<getApellido()<<"\nsu saldo actual es: "<< getNro()<<endl;
    }
private:
    unsigned int saldo;
    string nombre;
    string apellido;
    double nrodecuenta;
};