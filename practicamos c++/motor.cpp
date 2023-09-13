#include <iostream>
#include <string>
#include "ej 30.11.h"
using namespace std;
int main()
{
    motordecehiculo motor1("Toyota", "Diesel", 2022);

    string color;
    cout << "ingrese el color del vehiculo: ";
    cin>>color;
    motor1.setColor(color);
    cout <<"\ningrese la capacidad de su motor: ";
    int capacidaddelmotor;
    cin>>capacidaddelmotor;
    cout<<"\nlas caracteristicas de su vehiculo son: \n" << endl;
    motor1.setCapmotor(capacidaddelmotor);
    motor1.displaycardetails();
}