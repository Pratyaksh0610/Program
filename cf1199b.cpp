#include<bits/stdc++.h>
using namespace std;
#define ll long double
const long long int m=1000000000+7;
    
int main(){
    ll h;
    ll l;
    cin>>h>>l;
    ll d;
    ll lm=l/h*l/2;
    //cout<<lm<<endl;
    ll hm=h/2;
    //cout<<hm<<endl;
    d=lm-hm;
    cout<<setprecision(17)<<d<<endl;
    return 0;
}