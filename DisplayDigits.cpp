#include<iostream>
using namespace std;
int main(){
    int n,r,rev,p;
    cout<<"Enter the number whose digits you want to be displayed(must be greater than 0): \n";
    cin>>n;
    rev=0;
    
    while(n>0){
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    while(rev>0){
        p=rev%10;
        rev=rev/10;
         if (p==0)
        {
            cout<<"zero ";
        }
        if (p==1)
        {
            cout<<"one ";
        }
         if (p==2)
        {
            cout<<"two ";
        } if (p==3)
        {
            cout<<"three ";
        } if (p==4)
        {
            cout<<"four ";
        } if (p==5)
        {
            cout<<"five ";
        } if (p==6)
        {
            cout<<"six ";
        } if (p==7)
        {
            cout<<"seven ";
        } if (p==8)
        {
            cout<<"eight ";
        } if (p==9)
        {
            cout<<"nine ";
        }
    }

    return 0;
}