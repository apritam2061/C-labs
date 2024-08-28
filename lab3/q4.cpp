//Program to convert time (hour, minute and second) in 24-hr format to 12-hr format.


#include<iostream>
using namespace std;
 class TIME24
 {
    int hr;
    int min;
    int sec;
    

    public:
    void get_time()
    {
        cout<<"enter hour:";
        cin>>hr;
        cout<<"enter minute:";
        cin>>min;
        cout<<"enter second:";
        cin>>sec;
     
     
    }

    int sendHH()
    {
        return hr;
    }
    int sendMM()
    {
        return min;
    }
    int sendSS()
    {
        return sec;
    }

    int sendhouu()
    {
        return hr;
    }

};



 class TIME12
 {
    int hr;
    int min;
    int sec;
    int houu;
    public:
 void dispTime()
 {
    if(houu>=12)
    {
        cout<<"Time in 12 hr format is: ("<<hr<<":"<<min<<":"<<sec<<")"<<"pm"<<endl;

    }
    if(houu<12)
    {
        cout<<"Time in 12 hr format is: ("<<hr<<":"<<min<<":"<<sec<<")"<<"am"<<endl;
    }
    
 }

TIME12(TIME24 t24)
{
    hr=t24.sendHH();
 min=t24.sendMM();
sec=t24.sendSS();
 houu=t24.sendhouu();
 if(hr>12)
  {
    hr=hr-12;
  }
}


};




 int main()
 {
    TIME24 t24;
    t24.get_time();
    TIME12 t12=t24;
    t12.dispTime();
    return 0;
}