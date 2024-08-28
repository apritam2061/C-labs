// Q.6)

#include<iostream>
using namespace std;

class student 
{
    int roll;
    char name[20];
    public:

    void input()
    {
        cout<<"enter roll no: ";
        cin>>roll;
        cout<<"enter your name: ";
        cin>>name;
    }
    void output()
    {
        cout<<"roll no: "<<roll<<endl;
        cout<<"name: "<<name<<endl;
    }
};


class Internal_Exam : public student
{
    protected:
    int m[7];
    public:
    
     void input()
     {
        student::input();
        cout<<"for internal exam:"<<endl;
        for(int i=0;i<7;i++)
        {
            cout<<"enter marks of subject "<<i+1<<":";
            cin>>m[i];
        }
     }
};

class Final_Exam : public student
{
    protected:
    int m[7];
public:
 void input()
     {
       cout<<"for final exam"<<endl;
        for(int i=0;i<7;i++)
        {
            cout<<"enter marks of subject "<<i+1<<":";
            cin>>m[i];
        }
     }


};

class reasult : public Internal_Exam, public Final_Exam
{
    float avg_mark=0.0;
    public:
    
    void input()
    {
     Internal_Exam::input();
     Final_Exam::input();
    }

    void showReasult()
    {
        for(int i=0;i<7;i++)
        {
            avg_mark=avg_mark+(Internal_Exam::m[i]+Internal_Exam::m[i]);
         }
         Internal_Exam::output();
         cout<<"average marks is: "<<avg_mark<<endl;

    }
   
};

int main()
{
    reasult r;
    r.input();
    cout<<"_____________________________"<<endl;
    r.showReasult();
    cout<<"_____________________________"<<endl;
    return 0;
}