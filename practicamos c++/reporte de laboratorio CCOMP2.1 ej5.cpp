#include <iostream>
using namespace std;
int main()
{
    int n1{0}, n2{0}, sum{0}, summ{0}, n1m{0}, n2m{0};
        cout<<"ingrese dos enteros: ";
        cin>>n1>>n2;
        sum = n1 + n2;
        summ = (n1 + n2) % 2;
        n1m = n1 % 2;
        n2m = n2 % 2;
        if ((n1m == 1))
        {
            cout<<n1<<" es impar\n";
        }
        else if ((n1m == 0))
        {
            cout<<n1<<" es par\n";
        }
        if ((n2m == 1))
        {
            cout<<n2<<" es impar\n";
        }
        else if ((n2m == 0))
        {
            cout<< n2<<" es par\n";
        }
        if ((summ == 1))
        {
            cout<<sum<<" es impar\n";
        }
        else if ((summ == 0))
        {
            cout<<sum<<" es par\n";
        }
    return 0;
}