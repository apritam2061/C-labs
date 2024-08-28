// Program to convert time (hour, minute and second) in 12-hr format to
// 24-hr format.

#include<iostream>
using namespace std;

class Time12
{
int hr;
int min;
int sec;
int ampm;
public:
 void takeinput()
 {
    cout<<"enter hour";
    cin>>hr;
    cout<<"enter minute";
    cin>>min;
    cout<<"enter second";
    cin>>sec;
    cout<<"enter 0 for am and 1 for pm";
    cin>>ampm;
 }

 int HH()
 {
    return hr;
 }
 int MM()
{
    return min;
}
int SS()
{
    return sec;
}
int am_pm()
{
    return ampm;
}

};

class Time24
{
    int hr;
    int min;
    int sec;
    int ampm;
    public:
    
    void showOutput()
    {
        cout<<"Time in 12 hr format is: ("<<hr<<":"<<min<<":"<<sec<<")"<<endl;
    }

    Time24(Time12 t12)
    {
        hr=t12.HH();
        min=t12.MM();
        sec=t12.SS();
        ampm=t12.am_pm();
        if(ampm ==1 && hr!=12)
        {
            hr=hr+12;
        }
        if(ampm==1 && hr==12)
        {
            hr=hr+0;
        }
        if(ampm==0 && hr==12)
        {
            hr=hr-hr;
        }


    }

};


int main()
{
    Time12 t12;
    t12.takeinput();
    Time24 t24=t12;
    t24.showOutput();
    return 0;
}

