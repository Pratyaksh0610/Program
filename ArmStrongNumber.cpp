//Armstrong number is a number whose sum of cubes of digits is equal to the number itself//
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float m,r,sum;
    sum=0;
    int n;
    cout<<"Enter the number that you want to check \n";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        sum+=pow(r,3);
        cout<<r<<endl;
        n=n/10;
        }

    if(sum==m){
        cout<<m<<" is an Armstrong number\n";}
    else{
        cout<<m<<" is not an Armstrong number\n";}
    cout<<sum;
    return 0;
}