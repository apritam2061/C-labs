#include<iostream>
using namespace std;
 class maximum
 {
    public:
int a;
int b;
int c;

 };
int main()
{
 maximum m1;
cout<<"enter first number\n";
cin>>m1.a;
cout<<"enter second number\n";
cin>>m1.b;
cout<<"enter third  number\n";
cin>>m1.c;

if(m1.a>m1.b&&m1.a>m1.c)
{
    cout<<"a is greatest";
}
else if(m1.b>m1.a&&m1.b>m1.c)
{
     cout<<"b is greatest";
}

else if(m1.c>m1.a&&m1.c>m1.b)
{
    cout<<"c is greatest";
}

return 0;
}