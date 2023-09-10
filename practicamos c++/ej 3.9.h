#include <string>
using namespace std;
class Account{
public:
    Account(string nombredelacuenta, int saldoinicial)
    : name{nombredelacuenta}{
        if( saldoinicial>0)
        {
            saldo = saldoinicial;
        }
    }
    void retiro (int montoderetiro)
    {
        if(montoderetiro > 0)
        {
            saldo = saldo - montoderetiro;
        }
    }
    
    int getBalance() const
    {
        return saldo;
    }

    void setName(string nombredelacuenta)
    {
        name = nombredelacuenta;
    }
    string getName() const
    {
        return name;
    }
private:
    string name;
    int saldo{0};
};