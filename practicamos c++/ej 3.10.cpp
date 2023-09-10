#include <iostream>
#include "class factura.h"
using namespace std;
int main()
{
    Factura factura1{"14321", "estos productos son no pereederos consumalos prudentemente", 10, 120};

    cout<< "la factura de numero: " << factura1.getParteNumerica()<<"\ncon la descripcion: "<< factura1.getDescripcion()<<"\ny el numero de productos a comprar es: "<<factura1.getCantidadDeProducto()<<"\ncon un costo total de:"<<factura1.getprecio()<<endl;
    cout<<"aplicando impuestos VAT: " <<factura1.getVAT()<<"\ny un descuento del: " <<factura1.getDescuento()<<"\nla factura total sale: "<<factura1.getMontoFactura()<<endl;    
}