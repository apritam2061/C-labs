#include<iostream>
using namespace std;
class employee{
   
    static int engcount;
    static int mngrcount;
    static int doctcount;
   
    string name;
    string designation;
     public:
     void getinput(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter designation (engineer/manager/doctor): ";
        cin >> designation;
        countemployee();
     }
     static void showcount(){
        cout<<"the total number of engineer count: "<<engcount<<endl;;
        cout<<"the total number of manager count: "<<mngrcount<<endl;
        cout<<"the total number of doctor count: "<<doctcount<<endl;
         
    
     }  
     private:
     void countemployee(){
        if(designation=="engineer"){
            engcount++;
           
        }
        else  if(designation=="manager"){
            mngrcount++;
           
     }
     else  if(designation=="doctor"){
            doctcount++;
         
     }
    
     }
};
 int employee ::engcount=0;
    int employee ::mngrcount=0;
    int employee ::doctcount=0;
int main(){
    employee e1,e2,e3;
    e1.getinput();
    e2.getinput();
    e3.getinput();
    employee::showcount();
   return 0;


}