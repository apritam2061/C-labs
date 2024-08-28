// To write a C++ program to manipulate complex numbers using operator
// overloading. (addition,subtraction,multiplication,division)


#include<iostream>
using namespace std;


class complex 
{


float real;
float img;


public:


complex()
{
    real=0;
    img=0;
}


 complex (float r, float i)
 {
    real=r;
    img=i;

 }

complex operator+(complex c2)
{
complex temp;
temp.real=real+c2.real;
temp.img=img+c2.img;
return temp;
}

complex operator-(complex c2)
{
complex temp;
temp.real=real-c2.real;
temp.img=img-c2.img;
return temp;
}


complex operator*(complex c2)
{
complex temp;
temp.real=(real*c2.real-img*c2.img);
temp.img=(real*c2.img+img*c2.real);
return temp;
}


complex operator/(complex c2)
{
complex temp;
temp.real=(real*c2.real+img*c2.img)/(c2.real*c2.real+c2.img*c2.img);
temp.img=(img*c2.real-real*c2.img)/(c2.real*c2.real+c2.img*c2.img);
return temp;
}




void addition()
{
    if(img>=0){
    cout<<"the sum is:";
    cout<<real<<"+"<<img<<"i"<<endl;
}
else{
    cout<<"the sum is:";
    cout<<real<<img<<"i"<<endl;
}
}
void subtraction()
{
    if(img>=0){
    cout<<"the difference is is:";
    cout<<real<<"+"<<img<<"i"<<endl;
}
else{
    cout<<"the sum is:";
    cout<<real<<img<<"i"<<endl;
}
}
void multiplication()
{
    if(img>=0){
    cout<<"the product is:";
    cout<<real<<"+"<<img<<"i"<<endl;
}
else{
    cout<<"the sum is:";
    cout<<real<<img<<"i"<<endl;
}
}
void division()
{
    if(img>=0){
    cout<<"the division is:";
    cout<<real<<"+"<<img<<"i"<<endl;
}
else{
    cout<<"the sum is:";
    cout<<real<<img<<"i"<<endl;
}
}

};




int main()
{   int a,b,c,d;

    cout<<"for first number\n";
    cout<<"real part";
    cin>>a;
    cout<<"imginary part";
    cin>>b;

    cout<<"for second number\n";
    cout<<"real part";
    cin>>c;
    cout<<"imginary part";
    cin>>d;


complex c1(a,b),c2(c,d),c3;
c3=c1+c2;
c3.addition();
c3=c1-c2;
c3.subtraction();
c3=c1*c2;
c3.multiplication();
c3=c1/c2;
c3.division();
return 0;
}