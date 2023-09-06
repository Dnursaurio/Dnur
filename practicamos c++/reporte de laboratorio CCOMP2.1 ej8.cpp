#include <iostream>
using namespace std;
int main()
{
        char c;
        cout<<"ingrese un caracter: ";
        cin >> c;
        int valor = static_cast<int>(c);
        cout<< "el valor de su caracter es: " << valor;
    return 0;
}