#include <iostream>
using namespace std;
int main()
{
    int n1{0}, n2{1}, n3{2}, n4{3}, n5{4};
        int n1c{0}, n2c{0}, n3c{0}, n4c{0}, n5c{0};
        int n1cu{0},n2cu{0}, n3cu{0}, n4cu{0}, n5cu{0};
        n1c = n1*n1;
        n2c = n2*n2;
        n3c = n3*n3;
        n4c = n4*n4;
        n5c = n5*n5;
        n1cu = n1c*n1;
        n2cu = n2c*n2;
        n3cu = n3c*n3;
        n4cu = n4c*n4;
        n5cu = n5c*n5;
        cout<<"cara\tarea\tvolumen\n" << n1<<"\t"<<n1c<<"\t"<<n1cu<<"\n"<<n2<<"\t"<<n2c<<"\t"<<n2cu<<"\n"<<n3<<"\t"<<n3c<<"\t"<<n3cu<<"\n"<<n4<<"\t"<<n4c<<"\t"<<n4cu<<"\n"<<n5<<"\t"<<n5c<<"\t"<<n5cu<<endl;
    return 0;
}