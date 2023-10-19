#include <iostream>
using namespace std;
int main()
{
    int array[4];
    cout<<"ingrese los valores del arreglo: ";
    for (int i = 0; i < 4; i++)
    {
        cin>>array[i];
    }

    cout<<"los valores del arreglo son: [";
    for (int i = 0; i < 4; i++)
    {
        cout<<" "<<array[i];
    }
    cout<<"]";
    return 0;
}