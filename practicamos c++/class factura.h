#include <string>
#include <iostream>
using namespace std;
class Factura
{
public:
    Factura(string pnum, string desc, int cantpro, int nuevoprecio):
        parte_numerica{pnum}, descripcion{desc},precio{nuevoprecio}, cantidaddeproductos{cantpro}, VAT{0.2}, descuento{0}
        {

        }
        void setParteNumerica(string pnum)
        {
            parte_numerica = pnum;
        }
        void setDescripcion(string desc)
        {
            descripcion = desc;
        }
        void setCantidadDeProducto(int cantpro)
        {
            if (cantpro > 0)
            {
                cantidaddeproductos = cantpro;
            }
        }

        void setPrecio(int nuevoprecio)
        {
            if (precio > 0)
            {
                precio = nuevoprecio;
            } 
        }
        void setVAT(double vat)
        {
            if (vat > 0)
            {
                VAT = vat;
            }  
        }
        void setDescuento(double descuento)
        {
            if (descuento > 0)
            {
                descuento = descuento;
            }
        }

        void setmontofactura(double montofactura)
        {
            montofactura = cantidaddeproductos * precio/VAT*descuento;
        }

        string getParteNumerica() const
        {
            return parte_numerica;
        }

        string getDescripcion() const
        {
            return descripcion;
        }

        int getCantidadDeProducto() const
        {
            return cantidaddeproductos;
        }

        int getprecio() const
        {
            return precio;
        }

        double getVAT() const
        {
            return VAT;
        }

        double getDescuento() const
        {
            return descuento;
        }

        double getMontoFactura() const
        {
            return montofactura;
        }
    private:
        string parte_numerica; 
        string descripcion;
        int cantidaddeproductos;
        int precio;
        double VAT;
        double descuento;
        double montofactura;
        
};