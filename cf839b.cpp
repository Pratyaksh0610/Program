#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        int a=arr[0];
        int b=arr[1];
        int c=arr[2];
        int d=arr[3];
        bool done=false;
        int ch=0;
        while(ch<4){
            if((a<b&&b<d)&&(a<c&&c<d)){
            done=true;
            break;
            }
            // cout<<"a is "<<a<<endl;
            // cout<<"b is "<<b<<endl;
            // cout<<"c is "<<c<<endl;
            // cout<<"d is "<<d<<endl;
            int temp=c;
             c=d;
             d=b;
             b=a;
             a=temp;
            ch++;
        }
        if(done){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}