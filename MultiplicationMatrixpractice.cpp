#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],m[10][10],r1,c1,r2,c2;
    cout<<"Enter the number of rows and columns of matrix 1 \n";
    cin>>r1>>c1;
    cout<<"Enter the number of rows and columns of matrix 2 \n";
    cin>>r2>>c2;

    if(c1!=r2)
    {
    cout<<"\n Multiplication is not possible";
    }

    else
    {
    // Taking values of matrix 
    for(int i=1;i<=r1;i++)
    {
        for(int j=1;j<=c1;j++)
        {
            cout<<"Enter the value of a"<<i<<j<<" ";
            cin>>a[i][j];
        }
    }
    // Taking values of matrix 2
    for(int i=1;i<=r2;i++)
    {
        for(int j=1;j<=c2;j++)
        {
            cout<<"Enter the value of b"<<i<<j<<" ";
            cin>>b[i][j];
        }
    }
    // for multiplication
    for(int i=1;i<=r1;i++)
    {
        for(int j=1;j<=c2;j++)
        {
            m[i][j]=0;
            m[i][j]+=a[i][j]*b[j][i];
           cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}