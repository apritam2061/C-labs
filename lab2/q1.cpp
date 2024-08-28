// To write a C++ program to swap two private data members using friend
// functions

#include<iostream>
using namespace std;
class two;
class one
{
    int value1=20;
    friend void swap(one&,two&);
};

class two
{
    int value2=30;
    friend void swap(one&,two&);

};

void swap(one &o1,two &t1)
{
    int temp;
    temp=o1.value1;
    o1.value1=t1.value2;
    t1.value2=temp;
    cout<<"value1="<<o1.value1<<endl;
    cout<<"value2="<<t1.value2<<endl;
}



int main()
{
    one o1;
    two t1;
    swap(o1,t1);
    return 0;
}
