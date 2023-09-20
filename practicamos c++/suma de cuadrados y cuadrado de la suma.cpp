#include <iostream>
using namespace std;

int main()
{
    long long sumcuads = 0;
    for (int i = 1; i <= 100; i++)
    {
        sumcuads += i*i;
    }

    long long cuadsum = 0;
    for (int i = 1; i <= 100; i++)
    {
        cuadsum +=i;
    }
    cuadsum *= cuadsum;
    
    int diference = cuadsum - sumcuads;

    cout<<"la suma de cuadrados de los primeros 100 numeros es: "<<sumcuads<<endl;
    cout<<"el cuadrado de la suma de los priemros 100 numeros es: "<<cuadsum<<endl;
    cout<<"la diferencia de la suma de cuadrados y el cuadrado de la suma de los primeros 100 numeros es: "<<diference<<endl;
}