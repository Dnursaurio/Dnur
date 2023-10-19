#include <iostream>
using namespace std;

bool palindromo(int num)
{
    int norigen = num;
    int alreves = 0;
    while (num > 0)
    {
        int digit = num%10;
        alreves = alreves * 10+digit;
        num/=10;
    }
    return norigen == alreves;
}

int main()
{
    cout<<"nro palindromo producto de dos nros de tres cifras es: "<<endl;

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            int prod = i*j;
            if (palindromo(prod))
            {
                cout<<i<<"*"<<j<<"="<<prod<<endl;
            }
        }
    }
    return 0;
}