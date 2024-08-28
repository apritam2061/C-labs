/*To write a C++ program to overload all relational operators to compare
 US currency with Nepalese currency. Use conversion rate $1=NRs
 101.36(Note: make two classes to represent each currency)*/

#include <iostream>
using namespace std;
#define USD_RATE 101.36

class NPR
{
    float amount;

public:
    NPR(float amt = 0)
     { 
        amount = amt; 
    }

    void inputAmount()
    {
        cout << "Enter NPR amount: " << endl;
        cin >> amount;
    }

    float getAmount() 
    {
         return amount; 
    }
};

class USD
{
    float amount;

public:
    USD(float amt = 0)
     { 
        amount = amt; 
     }

    void inputAmount()
    {
        cout << "Enter usd amount: " << endl;
        cin >> amount;
    }

    bool operator==(NPR n1)
    {
        // cout << (n1.getAmount() == (amount * USD_RATE));
        if (n1.getAmount() == amount * USD_RATE)
            return true;
        else
            return false;
    }

    bool operator>(NPR n1)
    {
        if (amount * USD_RATE > n1.getAmount())
            return true;
        else
            return false;
    }

    bool operator>=(NPR n1)
    {
        if (amount * USD_RATE >= n1.getAmount())
            return true;
        else
            return false;
    }

    bool operator<(NPR n1)
    {
        if (amount * USD_RATE < n1.getAmount())
            return true;
        else
            return false;
    }

    bool operator<=(NPR n1)
    {
        if (amount * USD_RATE <= n1.getAmount())
            return true;
        else
            return false;
    }

    bool operator!=(NPR n1)
    {
        if (amount * USD_RATE != n1.getAmount())
            return true;
        else
            return false;
    }
};

int main()
{
    NPR n1;
    USD u1;
    n1.inputAmount();
    u1.inputAmount();

    if (u1 >= n1)
        cout << "USD is greater than or equal to npr"<<endl;
    else
        cout << "npr is greater than usd"<<endl;
    
       
    if (u1 <= n1)
        cout << "USD is less than or equal to npr"<<endl;
    else
        cout << "npr is greater than usd"<<endl;
    
       
    if (u1 == n1)
        cout << "USD is equal npr"<<endl;
    else if (u1 != n1)
        cout << "npr is not equal to usd"<<endl;
    
       
    if (u1 > n1)
        cout << "USD is greater than npr"<<endl;
    else if (u1 < n1)
        cout << "npr is greater than usd"<<endl;

    return 0;
}