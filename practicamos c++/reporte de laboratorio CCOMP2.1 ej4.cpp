#include <iostream>
using namespace std;
int main()
{
    int n1{0},n2{0},n3{0},n4{0},n5{0};
        cout<< "ingrese 5 enteros: ";
        cin>>n1>>n2>>n3>>n4>>n5;
        if ((n1>n2) && (n1>n3) && (n1>n4) && (n1>n5))
        {
            cout<<"el numero mayor es " << n1 << endl;
        }
        else if((n1<n2) && (n1<n3) && (n1<n4) && (n1<n5))
        {
            cout<<"el menor es "<<n1<<endl;
        }
        if ((n2>n1) && (n2>n3) && (n2>n4) && (n2>n5))
        {
            cout<<"el numero mayor es " << n2 << endl;
        }
        else if((n2<n1) && (n2<n3) && (n2<n4) && (n2<n5))
        {
            cout<<"el menor es "<<n2<<endl;
        }        
        if ((n3>n1) && (n3>n2) && (n3>n4) && (n3>n5))
        {
            cout<<"el numero mayor es " << n3 << endl;
        }
        else if((n3<n1) && (n3<n2) && (n4<n4) && (n3<n5))
        {
            cout<<"el menor es "<<n3<<endl;
        }
        if ((n4>n1) && (n4>n3) && (n4>n2) && (n4>n5))
        {
            cout<<"el numero mayor es " << n4 << endl;
        }
        else if((n4<n1) && (n4<n3) && (n4<n2) && (n4<n5))
        {
            cout<<"el menor es "<<n4<<endl;
        }
        if ((n5>n1) && (n5>n3) && (n5>n4) && (n5>n2))
        {
            cout<<"el numero mayor es " << n5 << endl;
        }
        else if((n5<n1) && (n5<n3) && (n5<n4) && (n5<n2))
        {
            cout<<"el menor es "<<n5<<endl;
        }
    return 0;
}