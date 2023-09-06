#include <iostream>
using namespace std;
int main()
{
        float n1{0}, n2{0}, BMI{0};
        cout<< "ingrese su peso: ";
        cin>>n1;
        cout<< "ingrese su altura: ";
        cin>>n2;
        BMI = n1/(n2*n2);
        cout<<BMI<<endl;
        if (BMI<18.5)
        {
            cout<<"estas bajo de peso, come más";
        }
        else if ((BMI>=18.5) && (BMI<=24.9))
        {
            cout<<"estas bien, sigue así";
        }
        else if ((BMI>=25) && (BMI<=29.9))
        {
            cout<<"tas gordito(a), haga ejericio";
        }
        else if (BMI>=30)
        {
            cout<<"estos calculos me pesan, mucho";
        }
    return 0;
}