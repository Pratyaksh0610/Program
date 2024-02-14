#include<iostream>
using namespace std;
int main(){
    int n,i,sum;
    sum=0;
    cout<<"Enter the number till which you want to find the sum\n";
    cin>>n;

    for(i=1;i<=n;i++){
        sum+=i;}
        cout<<"The sum of first "<<n<<" natural numbers is "<<sum<<endl;
    return 0;
}