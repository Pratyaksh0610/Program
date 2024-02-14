#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of the operation you wish to perform:\n1. Addition 2. Subtraction 3. Multiplication 4. Division\n";
    int operation;
    cin>>operation;

    int a,b,c;
    cout<<"Enter 2 numbers ";
    cin>>a>>b;

    switch(operation){
    case 1: c=a+b;
    break;

    case 2: c=a-b;
    break;

    case 3: c=a*b;
    break;

    case 4: c=a/b;
    break;
     }
     cout<<"The value of c is "<<c;
      return 0;
}