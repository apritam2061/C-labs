// Program to convert Cartesian coordinate to Polar.

#include <iostream>
#include <cmath>
using namespace std;

class Cartesian
{
    float x;
    float y;

public:
    void takeinput()
    {
        cout<<"Enter value of x: ";
        cin>>x;
        cout<<"Enter value of  y: ";
        cin>>y;
    }

    void dispoutput()
    {
        cout<<"Cartesian Coordinates(x,y):("<<x<<","<<y<<")"<<endl;
    }
    float sendX()
    {
        return x;
    }
    float sendY()
    {
        return y;
    }
};

class Polar
{
    float radius;
    float angle;

public:
     void dispoutput()
    {
        cout<< "Polar Coordinates(r,theta):("<<radius<<","<<angle<<")"<<endl;
    }
    Polar(Cartesian c1)
    {
        radius=sqrt(c1.sendX()*c1.sendX()+c1.sendY()*c1.sendY());
        angle=atan2(c1.sendY(),c1.sendX());
    }
};



int main()
{
    Cartesian c1;
    c1.takeinput();
    Polar p1=c1;
    c1.dispoutput();
    p1.dispoutput();
    return 0;
}