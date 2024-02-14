#include<iostream>
using namespace std;
int main(){
    int key,n;
    cout<<"Enter the amount of numbers you would like to input: ";
    cin>>n;

    cout<<"\nEnter the key that you would like to search: ";
    cin>>key;
    
    int A[n];
    for(int i=0;i<n;i++){
    cout<<"Enter the numbers of array: \n";
    cin>>A[i];
    }

    for(int i=0;i<n;i++){
        if(A[i]==key){
        cout<<"Adress of "<<key<<" is "<<i<<" in the array.\n";
        return 0;}
    }
    cout<<"Adress wasn not found";
    return 0;
}