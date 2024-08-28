/*
Create a class called 'TIME' that has
- three integer data members for hours, minutes and seconds
- constructor to initialize the object to zero
- constructor to initialize the object to some constant value
- overload +,- to add and subtract two TIME objects
- overload > function to compare two time
- member function to display time in HH:MM:SS format
*/



#include<iostream>
using namespace std;


class TIME 
{
    int hour;
    int min;
    int sec;
public:
TIME ()
{
    hour=0;
    min=0;
    sec=0;
}

TIME(int h,int m,int s)
{
    hour=h;
    min=m;
    sec=s;
}

TIME operator+(TIME t2)
{
TIME temp;
temp.hour=hour+t2.hour;
temp.min=min+t2.min;
temp.sec=sec+t2.sec;
return temp;

}


TIME operator-(TIME t2)
{
TIME temp;
temp.hour=hour-t2.hour;
temp.min=min-t2.min;
temp.sec=sec-t2.sec;
return temp;

}

bool operator>(TIME t2)
 {
        if(hour>t2.hour)
        {
            return true;
        }
        if(hour==t2.hour)
        {
            if(min>t2.min)
            {
                return true;
            }
            if (min==t2.min)
            {
                if(sec>t2.sec)
                {
                    return true;
                }
                else
                {
                    return false;
                }

            }
            else
             {
            return false;
            }
        }
        else{
            return false;
        }
    }





 void prntAddition()
 {
    cout<<" Time addition  HH:MM:SS="<<hour<<":"<<min<<":"<<sec<<endl;
 }
void prntSubtraction()
{
    cout<<" Time subtraction HH:MM:SS="<<hour<<":"<<min<<":"<<sec<<endl;
}

};



int main()
{
    TIME t1(2,40,15), t2(5,13,28),t3;
    t3=t1+t2;
    t3.prntAddition();
    t3=t1-t2;
    t3.prntSubtraction();

     if (t1 > t2) {
        cout << "t1 is greater than t2" << endl;
    } else {
        cout << "t2 is greater than t1" << endl;
    }
   

    return 0;
}