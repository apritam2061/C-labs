
#include<iostream>
using namespace std;
class EMPLOYEE{
  
        int emp_number;
        string emp_name;
        float Basic,Net_Salary;

    public:
        void getInput()
        {
            cout<<"Enter Employee Number: "<<endl;
            cin>>emp_number;
            cout<<"Enter Employee Name: "<<endl;
            cin>>emp_name;
            cout<<"Enter Basic Salary: "<<endl;
            cin>>Basic;
        }    

        void showData()
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"Employee Name: "<<emp_name<<endl;
            cout<<"Net Salary: "<<Net_Salary<<endl;
        cout<<"-----------------------------------"<<endl;
        }

        void calculate()
        {
    float DA = 52,IT = 32;
    float grossSalary = Basic + (DA/100 * Basic);
    Net_Salary = grossSalary - (IT/100 * grossSalary);
}
        
};

// void EMPLOYEE :: calculate()


int main()
{
    int n;
    cout<<"Enter the number of Employee: ";
    cin>>n;
    EMPLOYEE e[n];
    for(int i = 0;i<n;i++)
    {
        e[i].getInput();
        e[i].calculate();
    }
    for(int i = 0;i<n;i++)
    {
        e[i].showData();
    }
    return 0;
}