/* class Inventory
{
private:
int quant; // number on hand
int reorder; // reorder quantity
double price; // price per unit
char* descrip; // description of item
public:
Inventory (int q, int r, double p, char* d)
{ // initialize data members }
~Inventory()
{ //release dynamically allocated memory}
void print();
};
//
// first derived class
//
class Auto : public Inventory
{
char * manufacturer;
public:
Auto (int q, int r, double p, char * d, char * man)
{ //initialize base and derive members }
}
~Auto()
{}
void print();
};
//
// Second derived class
//
class Transmission : public Inventory
{
char * vendor;
public:
Transmission (int q, int r, double p, char * d, char * ven)
{}
~ Transmission (){}
void print();
};*/

#include<iostream>
#include<cstring>
using namespace std;
class Inventory
{
    private: 
    int quant;
    int reorder;
    double price;
    char* descrip;
    public:
    Inventory(int q, int r, double p, char* d)
    {
        quant=q;
        reorder=r;
        price=p;
        descrip=d;
    }
    ~Inventory()
    {

    }
     void print()
     {
        cout<<"Quantity: "<<quant<<endl;
        cout<<"Reorder: "<<reorder<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Description: "<<descrip<<endl;

     }

};

class Auto: public Inventory
{
    char * manufacturer;
    public:
Auto (int q, int r, double p, char * d, char * man): Inventory(q,r,p,d)
{

}
~Auto()
{

}
void print()
{

}

};

class Transmission:public Inventory
{
char * vendor;
public:
Transmission (int q, int r, double p, char * d, char * ven):Inventory(q,r,p,d)
{

}
~ Transmission ()
{

}
void print()
{

}
};

int main()
{

}