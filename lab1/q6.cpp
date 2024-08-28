// To write a C++ program to add two private data members using friend functions

#include<iostream>
using namespace std;



class riyaj;


class rabin
{
    int money=50;
    friend void pritam(rabin,riyaj);

};


class riyaj
{
    int money=80;
    friend void pritam(rabin,riyaj);
};


void pritam(rabin r1,riyaj r2)
{
    cout<<"the addition of private data member which is money gained by pritam is:\n"<<r1.money+r2.money<<endl;
}

int main()
{
    rabin r1;
    riyaj r2;
    pritam(r1,r2);
    return 0;
}