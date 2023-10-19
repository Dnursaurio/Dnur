#include <iostream>
using namespace std;
int main()
{
    int sumadeobjetivos = 1000;
    for (int i = 1; i < sumadeobjetivos; ++i)
    {
        for (int a = i+1; a <sumadeobjetivos/2; ++a)
        {
            int b = sumadeobjetivos - i - a;

            if (i*i + a*a == b*b)
            {
                cout<<"el triplete pitagorico es: "<<a<<b<<i<<endl;
                cout<<"el producto de abc es: "<<i*a*b<<endl;
            }
            
        }
        
    }
    return 0;
}