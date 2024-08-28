// Program to convert Polar Coordinate to Cartesian.

#include <iostream>
#include <cmath>
using namespace std;
class Polar
{
    float radius;
    float angle;
    public:

void takeinput()
    {
        cout<<"Enter radius:";
        cin>>radius;
        cout<<"Enter angle:";
        cin>>angle;
    }
    void dispoutput()
    {
      cout<<"Coordinates in Polar form: ("<<radius<<","<<angle<<")"<<endl;
    }
float passedRadius()
{
    return radius;
 }
float passedAngle()
{
return angle;
}
};

class Cartesian
{
    float x;
    float y;
    public: 

    void dispoutput()
    {
        cout<<"Coordinats in Cartesian form: ("<<x<<","<<y<<")"<<endl;
    }

    Cartesian(Polar p1)
    {
        x=p1.passedRadius()*cos(p1.passedAngle());
        y=p1.passedRadius()*sin(p1.passedAngle());
    }
};

int main()
{
    Polar p1;
    p1.takeinput();
    Cartesian c1=p1;
    p1.dispoutput();
    c1.dispoutput();
    return 0;
}