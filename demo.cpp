#include<iostream>
using namespace std;
 template<class t, class d>
 class rectangle
 {

    t length;
    d breadth;
    public:
    rectangle ()
    {
        length =0;
        breadth =0;

    }
    rectangle(t l,d b)
    {
    length=l;
    breadth=b;
    }
    void show_data()
    {
        cout<<length<<"+"<<breadth;
    }
    
 };

 int main()
 {
    rectangle <int,float>ri(3,5.2);
    rectangle <float,int>rf(3.4,4);
    ri.show_data();
    rf.show_data();
    
  
    return 0;




 }