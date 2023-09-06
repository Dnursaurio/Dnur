#include <iostream>
using namespace std;
int main()
{
    int n1{0}, n1n{0}, n2n{0}, n3n {0},n4n{0};
        cout<<"escriba un numero de 4 digitos: ";
        cin>>n1;
        n1n = n1 % 10;
        n2n = (n1 /10) % 10; 
        n3n = (n1 /100) % 10; 
        n4n = (n1 /1000) % 10;
        cout<< "las crifras del numero son: " << n4n << " " << n3n << " "<< n2n << " "<< n1n << endl;
    return 0;
}