#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,d;

cout<<"Enter the coefficients of quadratic equation ";
cin>>a>>b>>c;
d=pow(b,2)-(4*a*c);

if (d>0){
    cout<<"\nRoots are real"<<endl;
    cout<<"Roots are "<<(-b-sqrt(d))/(2*a)<<" and "<<(-b+sqrt(d))/(2*a);

}

else if(d==0) {
    cout<<"\nRoots are real and equal"<<endl;
    cout<<"Roots are "<<(-b-sqrt(d))/(2*a)<<" and "<<(-b+sqrt(d))/(2*a);
}

else {
    cout<<"\nRoots are imaginary";
}
    return 0;
}