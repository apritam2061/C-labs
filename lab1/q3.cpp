


#include <iostream>
using namespace std;

class MedicineStore
{
public:
    int order_quantity, store_quantity;

    void getInfo()
    {
        cout << "Enter store quantity: ";
        cin >> store_quantity;

        cout << "Enter order quantity: ";
        cin >> order_quantity;
    }

    void process()
    {
        if (store_quantity < order_quantity)
        {
            cout << "No Enough Quantity.";
        }
        else if (store_quantity <= 40 && order_quantity > 16)
        {
            cout << "You cannot order more than 16 items.";
        }
        else
        {
            cout<<"Your order is accepted.";
        }
    }
};
int main()
{
    MedicineStore s1;
    s1.getInfo();
    s1.process();
    return 0;
}