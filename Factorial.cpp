#include<iostream>
using namespace std;
int main(){
   int n,factorial;
   factorial=1;
   cout<<"Enter the number whose factorial you want: ";
   cin>>n;
if (n==0)
{
    cout<<"The factorial of 0 ";
}

   for(int i=1;i<=n;i++){
       factorial*=i;
   } 
   cout<<factorial;

    return 0;
}