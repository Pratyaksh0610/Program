//A perfect number is a number the sum of whose proper divisors(not the number itself) is equal to the number itself//
#include<iostream>
using namespace std;
int main(){

    int n,sum;
    sum=0;
cout<<"Enter the number which you want to check ";
cin>>n;

    for(int i=1;i<n;i++){
       if ((n%i)==0)
           sum+=i;
           
    }
    if (sum==n)
           {
               /* code */
               cout<<n<<" is a perfect number\n";
           }
    else 
    {
        cout<<n<<" is not a perfect number\n";
    }
    
    return 0;
}