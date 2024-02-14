#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number whose table you want:\n";
    cin>>n;

    for(i=19;i<=10;i++){
        cout<<n<<"x"<<i<<" is = "<<n*i<<endl;
    }

    return 0;
}