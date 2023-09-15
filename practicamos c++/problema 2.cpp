#include <iostream>
using namespace std;
bool NROperfecto(int n)
{
    int sumdiv{0};
    for (int c = 1; c <= n/2; c++)
    {
        if (n%c == 0)
        {
           sumdiv += 1;
        }   
    }
    return sumdiv == n;
}

int main()
{
    int nro;
    cout<< "ingrese un nro: "<< endl;
    cin>>nro;

    if (nro <= 0)
    {
       cout<<"ingrese un nro valio que sea mayor de 0";
       return 1;
    }

    int cont = 0;
    int num = 1;

    cout<< "los primeros " << nro << " perfen¿ctos son: ";
    
    while (cont < nro)
    {
       if (NROperfecto(num))
       {
        cout<<num<<" ";
        cont++;
       }
       num++;
    }
    cout<<endl;
    return 0;
}