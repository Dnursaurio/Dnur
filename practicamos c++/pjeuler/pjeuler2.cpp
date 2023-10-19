#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"ingrese un numero: ";
    cin>>n;

    if (n<=0)
    {
        cout<<"ingrese un nro mayor que 0";
        return 1;
    }
    long long nro1 = 1;
    long long nro2 = 2;
    long long sum = 0;

    cout<<"los primeros "<<n<<" numeros fibonacci son: "<<endl;

    for (long long i = 0; i < n; i++)
    {
        cout<<nro1<<" ";
        if (nro1%2 == 0)
        {
            sum += nro1;   
        }
        int next = nro1 + nro2;
        nro1 = nro2;
        nro2 = next;
    }
    cout<<"\nla suma de los numero pares de la serie "<<n<<" en fibonacci es: "<<sum<<endl;
    return 0;
}

