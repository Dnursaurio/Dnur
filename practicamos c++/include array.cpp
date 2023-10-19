#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main()
{
    array<int, 3> n; //n es el nombre del arreglo
    for (size_t i{0}; i < n.size(); ++i)
    {
        n[i] = 0;
    }
    cout<<"elemento"<< setw(10)<< "valor"<<endl;
    for (size_t j{0}; j < n.size(); ++j)
    {
        cout<<setw(7)<< j << setw(10) << n[j]<<endl;
    }
}