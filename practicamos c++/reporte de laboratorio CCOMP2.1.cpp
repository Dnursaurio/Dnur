#include <iostream>
using namespace std;
int main()
{   

    int radio{0};
    int diametro;
    float circunferencia;
    float area;
    const float pi = 3.14159f;
    cout<<"ingrese una medida de radio: ";
    cin>>radio;
    diametro = 2*radio;
    circunferencia = 2*pi*radio;
    area = pi*radio*radio;
    cout<<"la medida del diametro es: "<< diametro << "\nla medida de la circuferencia es: "<< circunferencia << "\nla mdeida del area es: " << area << endl;
    return 0;
}