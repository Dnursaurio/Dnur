#include <iostream>
using namespace std;

int mcd(int nro1, int nro2)
{
    while (nro2!=0)
    {
        int temporal = nro2;
        nro2 = nro1 % nro2;
        nro1 = temporal;
    }
    return nro1;
}

int mcm(int nro1, int nro2)
{
    return (nro1*nro2) / mcd(nro1,nro2);
}

int main()
{
    int MCM = 1;

    for (int num = 2; num <= 20; num++)
    {
        MCM=mcm(MCM,num);
    }
    cout<<"el mcm del los numero sque estan entre 1 y 20 es: "<<MCM<<endl;
    return 0;
}