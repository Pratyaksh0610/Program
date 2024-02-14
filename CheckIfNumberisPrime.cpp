#include<iostream>
using namespace std;
int main(){
    // int n,sum;
    // sum=0;
    // cout<<"Enter the number which you want to check \n";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     if((n%i)==0)
    //      sum+=i;
    // }
    // if(sum==(n+1)){
    //     cout<<n<<" is a prime number\n";
    // }
    // else{
    //     cout<<n<<" is not a prime number\n";
    // }
    int n,count;
    count=0;
    cout<<"Enter the value of the number which you want to check\n";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
     if((n%i)==0)
     count++;
    }
    if(count==2){
        cout<<n<<" is a prime number\n";
    }
    else
    {
        cout<<n<<" is not a prime number\n";
    }
    
    return 0;
}