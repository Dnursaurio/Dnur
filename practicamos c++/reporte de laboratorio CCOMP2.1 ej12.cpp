#include <iostream>
using namespace std;
int main()
{
    int pres{0};
    const float kmpordia = 23.1;
    const float costoporlitro = 6.52;
    const float kilometroporlitro = 13.0;
    const float estacionamientopordia = 344.0;
    const float peajepordia = 18.4;
    float ahorro{0};
    cout<<"ingrese con cuento presupuesto cuenta: ";
    cin>>pres;
    ahorro = pres - (kmpordia+costoporlitro+kilometroporlitro+estacionamientopordia+peajepordia);
    cout<<"con un presupuesto de: "<<pres<<"usted ahorra: "<<ahorro<<endl;
    return 0;
}