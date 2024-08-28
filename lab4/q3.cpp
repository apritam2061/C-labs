/*Modify Q.2 to add base class sales that holds an array of three floats so that it can record the rupees sales of a particular publication for the last three months. Include getdata() function to get three Sales amount from the user and a putdata() function to display sales figures. Alter the book and tape classes so they are derived from both publication and sales. An object of class book or tape should input and output sales data along with its other data.*/

#include<iostream>
#include<cstring>
using namespace std;

 class publication
 {
    string title;
    float price;
    public:
    void getdata()
    {
        cout<<"enter title:";
        cin>>title;
        cout<<"enter price: ";
        cin>>price;
    }
    void putdata()
    {
        cout<<"title: "<<title<<endl;
        cout<<"price: "<<price<<endl;
    }
};
class sales
{
    float sales[3];
   
    public:
    void getdata()
    {
        cout<<"enter sale of last three months"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"enter"<<i+1 <<" month sale: ";
            cin>>sales[i];
        }
       
    }

    void putdata()
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum=sum+sales[i];

        }
        cout<<"the total sales of last three month is: "<<sum<<endl;
    }

};


 class book: public publication, public sales
 {
int page;
public:
void getdata()
{   publication::getdata();
    cout<<"enter page count: ";
    cin>>page;
    sales::getdata();
}
void putdata()
{
    publication::putdata();
cout<<"page count: "<<page<<endl;
sales::putdata();
}

 };
 

 class tape: public publication, public sales
 {
    int time;
    public:
     void getdata()
     {
        publication::getdata();
        cout<<"enter palying time in minutes: ";
        cin>>time;
        sales::getdata();

     }
     void putdata()
     {
        publication::putdata();
        cout<<"plaiyng time: "<<time<<endl;
        sales::putdata();
     }

 };

 int main()
 {
    book b;
    tape t;
    b.getdata();
    t.getdata();
    cout<<"-----------------------------------------"<<endl;
    b.putdata();
    cout<<"-----------------------------------------"<<endl;
    t.putdata();
    cout<<"-----------------------------------------"<<endl;
    return 0;
 }