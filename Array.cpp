#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a[5]={2.999999,3.7,4.8,5,6};
    
    for(auto x:a){
        cout<<fixed<<setprecision(6)<<x<<endl;
    }

    return 0;
}