#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter the value of coefficients: ";
    cin>>a>>b>>c;
    cout<<"\nThe first root is "<<(-b+sqrt(b*b-(4*a*c)))/(2*a)<<endl;
    cout<<"The second root is "<<(-b-sqrt(b*b-(4*a*c)))/(2*a);
    return 0;
}