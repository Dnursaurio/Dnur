#include <iostream>
using namespace std;
bool primo(long long num)
{
    if (num<=1)
    {
        return false;
    }
    if (num<=3)
    {
        return true;
    }
    if (num%2==0||num%3==0)
    {
        return false;   
    }
    for (long long i = 5; i*i <=num; i+=6)
    {
        if (num%i==0||num%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long limite = 2000000;
    long long sum = 0;
    for (long long i = 2; i < limite; ++i)
    {
        if (primo(i))
        {
            sum+=i;
        }
        
    }
    cout<<"las suma de todos lops numeros primos debajo de dos millones es: "<< sum<<endl;
    return 0;
}