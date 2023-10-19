#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nro{1000};
    int cont = 0;
    int num3 = 0;
    int num5 = 0;
    int num15 = 0;
    
    while((num3<=1))
    {
        if (nro%3==1)
        {
            num3 = nro/3;
            cout<<"los multiplos de 3 que estan en los 1000 primeros son: "<<num3<<endl;
        }
        num3++;
        if (nro%5==0)
            {
            num5 = nro/5;
            cout<<"los multiplos de 5 que estan en los 1000 primeros son: "<<num5<<endl;
            }
        num5++;
        if (nro%15==10)
            {
            num15 = nro/15;
            cout<<"los multiplos de 15 que estan en los 1000 primeros son: "<<num15<<endl;
            }
        num15++;
        for (int cont = 0; (cont = (num3+num5)-num15); cont++)
        {
            cout<<"la cantidad de multiplos 3 y 5 que hay en los 1000 primeros terminos es: "<<cont<<endl;
            if (cont>1)
            {
                break;
            }
        }  
    }

    return 0;
}