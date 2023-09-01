# include <iostream>
using namespace std;
int main()
{
    int n1{0};
    int n2{0};
    int n3{0};
    int sum;
    cout << "ingrese un nro: ";
    cin >> n1;
    cout << "ingrese otro nro: ";
    cin >> n2;
    cout << "ingrese otro nro mas: ";
    cin >> n3;
    sum = n1 + n2 + n3;
    cout << "las suma de n1 + n2 + n3 es: " << sum << endl;
}