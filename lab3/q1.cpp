// Program to convert Nepalese Currency (Rupees and Paisa) to US
// Currency (Dollar and Cents)

#include<iostream>
using namespace std;

class NRS
{
int rupees;
int paisa;

public:

void getdata()
{
    cout<<"enter money in rupees"<<endl;
    cin>>rupees;
    cout<<"enter money in paisa"<<endl;
    cin>>paisa;
    if(paisa>=100)
    {
        rupees=rupees+paisa/100;
        paisa=paisa%100;
    }   
}
void putdata()
   {
    cout<<"Currency in NRS is:"<<rupees<<"rupees and "<<paisa<<"paisa"<<endl;
   }

   int getrupees()
{
    return rupees;
    
}
int getpaisa()
{
    return paisa;
}



};

 

class USD
{
    float dollar;
    float cents;
    public:

    USD(float d, float c)
    {
        dollar=d;
        cents=c;
    }



USD(NRS m1)
{
    float totalNRS=m1.getrupees()+m1.getpaisa()/100.0;
    float totalUSD=totalNRS/98.51;
    
    dollar=static_cast<int>(totalUSD);
    cents=(totalUSD-dollar)*100;

}
void putdata()
{
cout<<"Currency in USD is:"<<dollar<<"dollar"<<cents<<"cents"<<endl;
}




};


int main()
{
NRS m1;
m1.getdata();
USD m2=m1;
m1.putdata();
m2.putdata();
    return 0;
}