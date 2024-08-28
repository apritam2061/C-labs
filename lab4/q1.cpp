/*1.Assume class person stores the Name, Age and ID, class employee stores the designation, basic salary, total overtime(hr) in a month and hourly rate and class computedSalary stores the total salary of the employee. Implement above concept using appropriate inheritance.*/

#include<iostream>
using namespace std;
#include<cstring>

class person
{
string name;
int age;
int id;
public:

void input()
{
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter age: ";
    cin>>age;
    cout<<"enter id: ";
    cin>>id;
}
 void output()
 {
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"id: "<<id<<endl;
 }

};

class employee : public person
{
    protected:
string designation;
float basic_salary;
int overtime;
float rate;
public:
void input()
{
    person::input();
    cout<<"enter designation: ";
    cin>>designation;
    cout<<"enter basic slary: ";
    cin>>basic_salary;
    cout<<"enter overtime hour: ";
    cin>>overtime;
    cout<<"enter hourly rate: ";
    cin>>rate;
}
void output()
{
    person::output();
    cout<<"designation: "<<designation<<endl;
    cout<<"basic salary: "<<basic_salary<<endl;
    cout<<"overtime hour: "<<overtime<<endl;
}
};

class computedSalary : public employee
{
    float total_salary;
    public:
    void calculate()
    {
        total_salary=basic_salary+overtime*rate;
        employee::output();
        cout<<"total salary: "<<total_salary;
    }

};

int main()
{
    computedSalary c;
    c.input();
    c.calculate();
    return 0;
}