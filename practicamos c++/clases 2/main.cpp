#include <iostream>
#include "Point.h"
#include "Vectorgeometrico.h"
using namespace std;

int main()
{
    Point p1(0,0);
    Point p2(4,3);
    GeometricVector mod(p1,p2);
    cout<<"el modulo de los puntos p1 ("<<p1.GetX()<<","<<p1.GetY()<<")"<<" y p2 "<<"("<<p2.GetX()<<","<<p2.GetY()<<") es: "<<mod.modulo()<<endl;
    return 0;
}