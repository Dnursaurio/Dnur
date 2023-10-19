#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    //declaracion del puntero
    int *ptr = &x;
    //&(operador de direccion)
    cout<< &x<<endl;
    cout<< ptr<<endl;
    //*(operador de indireccion) nmos da a conocer en contenido de la direecion de memoria del puntero
    cout<< *ptr<<endl;
    *ptr = 100;
    cout<< *ptr<<endl;
    cout<< x<<endl;
    return 0;
    /*errores comunes:
    - int *ptr = x (no se le puede agisnar un entero y ningun tipo de dato a un puntero solo una direccion d ememoria)
    - int *ptr;
    *ptr =100; (esto es un error cmun ya que al puntero se le triene que asignar una dirrecion de memoria no un valor)
    PD: estre error no lo marca en el compilador, igual lo ejecuta
    - int x;
    int y = 10;
    cout<<x+yzznedl; (al x no tener un valor asignado toma un valor "basura" y lo sumara a y)*/
}