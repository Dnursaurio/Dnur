# include <iostream>
using namespace std;
int main()
{
    int n1{0};
    int n2{0};
    int n3{0};
    cout << "ingrese un nro: ";
    cin >> n1;
    cout << "ingrese otro nro: ";
    cin >> n2;
    cout << "ingrese otro nro mas: ";
    cin >> n3;
    if((n1 > n2)&&(n2 > n3))
    {
        cout << "el mayor de los tres es n1";
    }
    if((n1 == n2) || (n1 == n3)|| (n2 == n3))
    {
        if(n1 == n2)
        {
            cout << "n1 es igual a n2";
        }
        if (n1 == n3)
        {
            cout << "n1 es igual a n3";
        }
        if (n2 == n3)
        {
            cout << "n2 es igual a n3";
        }
        
        
    } 
    else if((n2 > n1)&&(n2 > n3))
    {
        cout << "el mayor de los tres es n2";
    }
    else
    {
        cout << "el mayor de los tres es n3";
    }
}