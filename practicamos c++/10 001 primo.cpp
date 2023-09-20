#include <iostream>
using namespace std;
bool primo(int num)
{
    if (num<=1)
    {
        return false;
    }
    
    if (num<=3)
    {
        return true;
    }
    
    if ((num%2 == 0) || (num%3==0))
    {
        return false;
    }

    for (int i = 5; i*i <= num; i+=6)
    {
        if (num%i ==0 || num%(i+2) ==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int posnum = 10001;
    int contadordeprimos = 0;
    int numinit = 2;

    while (true)
    {
        if (primo(numinit))
        {
            contadordeprimos++;
            if (contadordeprimos == posnum)
            {
                cout<<"el numero primo que esta en la posicion 10 001 es: "<<numinit<<endl;
                break;
            }
            
        }
        numinit++;
    }
    return 0;
}