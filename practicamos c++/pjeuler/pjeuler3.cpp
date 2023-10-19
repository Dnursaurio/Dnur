#include <iostream>
using namespace std;
void factprim(int num)
{
    cout<<"los factores primos de: "<<num<<" son: "<<endl;

    for (int fact = 2; fact <= num; fact++)
    {
        while (num%fact == 0)
        {
            cout<<fact<<" ";
            num/=fact;
        }
    }
    cout<<endl;
}

int main()
{
    int numero;
    cout<<"ingrese un nro: ";
    cin>>numero;

    if (numero <=1)
    {
        cout<<"ingrese un numro que sea mayor de 1";
        return 1;
    }

    factprim(numero);
    return 0;
}