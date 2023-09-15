#include <iostream>
#include <cmath>
using namespace std;

bool nroprimo(int n)
{
    if (n<=1)
    {
        return false;
    }
    if (n <=3)
    {
        return true;
    }
    
    if ((n%2 == 0)||(n%3 ==0))
    {
        return false;
    }
    
    for (int o = 5; o*o <= n; o+=6)
    {
        if ((n%o ==0)||(n%(o+2)==0))
        {
            return false;
        } 
    }
    return true;
}

int main()
{
    int i;
    cout<<"ingrese un nro";
    cin>>i;

    if (i<=0)
    {
        cout<<"ingrese un nro que no sea 0"<<endl;
        return 1;
    }
    int cont = 0;
    int nro = 2;
    
    cout<<"los primos de "<<i<<" son:"<<endl;

    while (cont < i)
    {
        if (nroprimo(nro))
        {
            cout<<nro<<" ";
            cont++;
        }
        nro++;
    }
    cout<<endl;
    return 0;
}