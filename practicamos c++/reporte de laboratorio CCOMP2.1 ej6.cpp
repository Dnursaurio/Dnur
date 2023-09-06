#include <iostream>
using namespace std;
int main()
{
        int nr1{0},nr2{0},nr3{0};
        cout<<"ingrese tres enteros: ";
        cin>>nr1>>nr2>>nr3;
        if (((nr1% nr3) && (nr2 % nr3)) == 0)
        {
            cout<<"los dos primeros son multiplos del tercero";
        }
        else
        {
            cout<<"los dos primeros no son multiplos del tercero";
        }
    return 0;
}