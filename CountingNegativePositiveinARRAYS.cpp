#include<iostream>
using namespace std;
int main(){
    int A[10]={1,-2,3,-4,-5,6,7,8,9,-10};
    int neg=0,pos=0;


    for(int i=0;i<10;i++){
        if(A[i]>0){
            pos++;
        }
        else if(A[i]<0){
            neg++;
        }
    }
    cout<<"The number of positive numbers is "<<pos<<endl;
    cout<<"The number of negative numbers is "<<neg<<endl;
    return 0;
}