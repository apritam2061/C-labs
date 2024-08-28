

#include <iostream>
using namespace std;

class DISTANCE
{

    int feet;
    int inch;

public:
    void inputDis()
    {
        cout << "Enter  distance in feet";
        cin >> feet;
        cout << "Enter distance in inch";
        cin >> inch;

        if (inch >= 12)
        {
            feet += inch / 12;
            inch = inch % 12;
        }
    }

    void outputDis()
    {
        cout << feet << " feet " << inch << " inch " << endl;
    }

    DISTANCE addDis(DISTANCE d2)
    {
        DISTANCE result;
        result.inch = inch + d2.inch;
        result.feet = feet + d2.feet + result.inch / 12;
        result.inch = result.inch % 12;
        return result;
    }
};

int main()
{
    DISTANCE d1, d2, d3;

    cout << "For first distance" << endl;
    d1.inputDis();

    cout << "For second distance" << endl;
    d2.inputDis();

    d3 = d1.addDis(d2);

    cout << "First distance";
    d1.outputDis();

    cout << "Second distance";
    d2.outputDis();

    cout << "Sum of distance is";
    d3.outputDis();

    return 0;
}
