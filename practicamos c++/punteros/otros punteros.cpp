#include <iostream>
using namespace std;

int main()
{
    double var = 3.1416;
    double *ptr = &var;
    cout<< *ptr<<endl;
    string cadena = "buenos_dias";
    string *ptr1 = &cadena;
    cout<< *ptr1<<endl;
    //.at me regresara el priumer elemento de la cadena
    cout<< cadena.at(0)<<endl;
    //se pone parecetesis en el (*ptr1) por la presencia de operadores
    cout<< (*ptr1).at(0)<<endl;
    return 0;
}