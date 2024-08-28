/* Create a class publication that stores the title and price of a publication. From this class derive two classes:book, which adds a page count and tape, which adds a playing time in minutes. Each of these three classes should have getdata() function to get its data from the user at the keyboard and putdata() function to display its data.*/

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


 class book: public publication
 {
int page;
public:
void getdata()
{   publication::getdata();
    cout<<"enter page count: ";
    cin>>page;
}
void putdata()
{
    publication::putdata();
cout<<"page count: "<<page<<endl;
}

 };
 

 class tape: public publication
 {
    int time;
    public:
     void getdata()
     {
        publication::getdata();
        cout<<"enter palying time in minutes: ";
        cin>>time;
     }
     void putdata()
     {
        publication::putdata();
        cout<<"plaiyng time: "<<time<<endl;
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