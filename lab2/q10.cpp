// Modify all member operator functions to friend function.
#include<iostream>
using namespace std;


class Matrix
{
int mat [3][3];

public:
void getdata()
{
    cout<<"enter the elements of 3x3 matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
}
void putdata()
 {
    cout<<"sum of matrix is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
 }
friend Matrix operator+(const Matrix& a, const Matrix& b);

};

Matrix operator+(const Matrix& a, const Matrix& b) {
    Matrix temp;
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
         {
            temp.mat[i][j] = a.mat[i][j] + b.mat[i][j];
        }
    }
    return temp;
}




int main()
{
    Matrix a,b,sum;
    cout<<"For first matrix:"<<endl;
    a.getdata();
    cout<<"For second matrix:"<<endl;
    b.getdata();
    sum=a+b;
    sum.putdata();
   return 0;
}