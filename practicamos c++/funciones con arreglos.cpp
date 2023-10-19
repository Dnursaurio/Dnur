#include <iostream>
using namespace std;

int suma(const int array[], const int tamaño)
{
    long sumar = 0;
    for (int i = 0; i < tamaño; sumar += array[i++]);
    return sumar;
}

int sumawhile(const int arr[], const int tam)
{   
    int i = 0;
    int suma = 0;
    while (i < tam)
    {
        suma += arr[i++];
    }
    return suma;
}

long sumarecursiva(const int arr[], const int tam)
{
    if (tam == 0)
        return 0;   
    else
        return arr[tam-1] + sumarecursiva(arr, tam-1);
}

void imprimirrecusivo(const int arr[], const int tam, int i =0)
{
    if (tam == 0)
    {
        return;
    }
    else
    {
        cout<<arr[i]<<" ";
        imprimirrecusivo(arr,tam-1, ++i);
    }
}

void intercambio(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int arr[], const int tam)
{
    for (int i = 0; i < tam/2; i++)
    {
        intercambio(arr[i], arr[tam-i-1]);
    }
}

void invetirrecursivo(int arr[], const int tam, int i = 0)
{
    if (i >= tam)
    {
        return;
    }
    else
    {
        int tmp = arr[i];
        i = arr[tam];
        arr[tam] = tmp;
        i++;
    }
    invetirrecursivo(arr,tam,i);
}


int main()
{
    int arr[] = {1,2,3,4};
    cout<<"suma de elementos con recursividad es: "<<sumarecursiva(arr,4)<<endl;
    cout<<"suma de elementos sin recursividad (usando for) es: "<<suma(arr,4)<<endl;
    cout<<"suma de elementos sin recursividad (usando while) es: "<<sumawhile(arr,4)<<endl;
    imprimirrecusivo(arr,4);
    cout<<endl;
    invertir(arr,4);
    cout<<"los elementos invertidos son: ";
    imprimirrecusivo(arr,4);
    cout<<endl;
    invetirrecursivo(arr,4);
    imprimirrecusivo(arr,4);
    return 0;
}