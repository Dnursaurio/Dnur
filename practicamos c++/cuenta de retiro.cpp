#include <iostream>
#include "ej 3.9.h"
using namespace std;
int main()
{
    Account cuenta1{"Alonzo Cuela", 21130};
    Account cuenta2{"Mateo Pumacahua", 1030};

    cout << "cuenta1: " << cuenta1.getName()<< " tu saldo es de: "<< cuenta1.getBalance()<< endl;
    cout << "cuenta2: " << cuenta2.getName()<< " tu saldo es de: "<< cuenta2.getBalance()<< endl;

    cout<< "ingrese en monto de retiro: ";
    int montoderetiro;
    cin>> montoderetiro;
    cout<< "retirando... " << montoderetiro << "de su cuenta " << cuenta1.getName();
    cuenta1.retiro(montoderetiro);

    cout<< "\ncuenta1: " << cuenta1.getName() << " su saldo es de: " << cuenta1.getBalance();
    cout<< "\ncuenta2: " << cuenta2.getName() << " su saldo es de: " << cuenta2.getBalance();

    cout << "\ningre un monto de retiro:";
    cin >> montoderetiro;
    cout<< "retirando..." << montoderetiro << "de su cuenta " << cuenta2.getName();
    cuenta2.retiro(montoderetiro);

    cout<< "\ncuenta1: " << cuenta1.getName() << " su saldo es de: " << cuenta1.getBalance();
    cout<< "\ncuenta2: " << cuenta2.getName() << " su saldo es de: " << cuenta2.getBalance() << endl;
}