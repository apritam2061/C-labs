#include<iostream>
using namespace std;
 
 template<class T1,class T2, class D3>

void calculate_size(T1 a,T2 b,D3 c)
{
    cout<<"size of a="<<sizeof(a)<<"bytes"<<endl;
    cout<<"size of b="<<sizeof(b)<<"bytes"<<endl;
    cout<<"size of c="<<sizeof(c)<<"bytes"<<endl;

}

int main()
{
 
 calculate_size(3,4.5,'e');
 return 0;


}