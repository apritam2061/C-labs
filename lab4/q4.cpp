// 4. class Date
// {
//     int day, month, year;

// public:
//     Date();
//     ~Date();
//     void display(); displays the date
//     Date get();     accesses the date members
//     void set();     sets the date members
// };
// class Time
// {
//     int hour;
//     int minute;
//     int second;

// public:
//     Time();
//     ~Time();
//     void display(); displays the time
//     Time get();     accesses the time members
//     void set();     sets the time members
// };
// class DateAndTime : public Date, public Time
// {
// public:
//     void display(); prints date and time
// };
// a.Define an instance object of class DateTime called Watch.
// b.Write a main () function that would initialize the values through the constructorfunctions, and then allows them to be reset through the set () functions. Be sure anddisplay the results following the constructor before you use the set functions.
// c.Through the use of the display () function, the time and date are to be displayed. Notethat the display () functions in all three


#include<iostream>
using namespace std;
class Date
{
int day;
int month;
int year;
public:
Date(int d, int m, int y)
{
day=d;
month=m;
year=y;
}
~Date()
{
   
}
void display()
{
    cout<<"DATE"<<"("<<year<<"/"<<month<<"/"<<day<<")"<<endl;

}
void set()
{
    cout<<"enter year: ";
    cin>>year;
    cout<<"enter month: ";
    cin>>month;
    cout<<"enter day: ";
    cin>>day;
}
};


class Time
{
    int hour;
    int minute;
    int second;

public:
    Time(int h, int m, int s)
    {
      hour=h;
      minute=m;
      second=s;
    }
    ~Time()
    {
        
    }
    void display()
    {
        cout<<"TIME"<<"("<<hour<<":"<<minute<<":"<<second<<")"<<endl;

    }
        
    void set()
    {
        cout<<"enter hour: ";
        cin>>hour;
        cout<<"enter minute: ";
        cin>>minute;
        cout<<"enter second: ";
        cin>>second;
    }

};

class DateAndTime : public Date, public Time
{
public:
 DateAndTime(int y, int m, int d, int h, int min, int s):Date(y,m,d),Time(h,min,s)
 {}
void display()
{
Date::display();
Time::display();
}
};


int main()
{
    DateAndTime Watch(2024,8,10,7,36,34);
    Watch.display();
    Watch.Date::set();
    Watch.Time::set();
    Watch.display();
    return 0;
}