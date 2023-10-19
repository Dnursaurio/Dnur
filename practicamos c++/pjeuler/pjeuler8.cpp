#include <iostream>
#include <string>
using namespace std;
int main()
{
    string digitos =
        "7n31671765313306249192251196744265747423553491949349698352031277450632623957831801698480186947885184385861560789112949495459501737958331952853208805511253069654185410011"
        "238697997586944547362818315219013121450798615935519415308482221096666716712769313098620048130832273354453367881109272862725099760823105243668421684508184789562849502"
        "722749523636055727339404934722262664455979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530"
        "420752963450";
    int digitosadyacents = 13;
    long long productomaximo = 0;

    for (size_t i = 0; i < digitos.length() - digitosadyacents; ++i)
    {
        long long producto = 1;
        for (size_t j = i; j < i + digitosadyacents; ++j)
        {
            producto *= (digitos[j] - '0');
        }
        if (producto > productomaximo)
        {
            productomaximo = producto;
        }
        
    }
    cout<< "el mayor producto de "<< digitosadyacents<<" es: "<<productomaximo<<endl;
    return 0;
}