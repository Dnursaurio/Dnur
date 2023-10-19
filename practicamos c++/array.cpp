#include <iostream>
using namespace std;

int main()
{

    /*definimos un arreglo*/
    int array[5];
    //iniciamos los vaores de ese arreglo
    array[0] = 1;
    array[1] = 3;
    array[2] = 14;
    array[3] = 25;
    array[4] = 2;
    /*imprimimos los valores del arreglo*/
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    cout<<array[4]<<endl;
    //iniciamos otro arreglo de otra forma
    int array2[4] = {0,4,15,6};
    cout<<array2[0]<<endl;
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;
    return 0;
}