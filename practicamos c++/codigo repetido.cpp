#include <iostream>
#include "ej 3.13.h"
using namespace std;
int main()
{
    Account cuenta1{"Alonzo Cuela", 21130};
    Account cuenta2{"Mateo Pumacahua", 1030};

    cout<<"cuenta 1: ";
    cuenta1.displayAccount();

    cout<< "ingrese en monto de retiro: ";
    int montoderetiro;
    cin>> montoderetiro;
    cout<< "retirando... " << montoderetiro << " de su cuenta " << cuenta1.getName();
    cuenta1.retiro(montoderetiro);

    cout<<"\ncuenta 2: ";
    cuenta2.displayAccount();

    cout << "\ningresr un monto de retiro:";
    cin >> montoderetiro;
    cout<< "retirando..." << montoderetiro << " de su cuenta " << cuenta2.getName();
    cuenta2.retiro(montoderetiro);

    cout<<"cuenta 1: ";
    cuenta1.displayAccount();
    cout<<"cuenta 2: ";
    cuenta2.displayAccount();
}