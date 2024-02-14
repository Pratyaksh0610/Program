#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll a,b;
        ll i=0;
        ll size=s.size();
        string s1;
        string s2;
        while(s[i]!='+'&&i<size){
            s1+=s[i];
            i++;
        }
        a=stoll(s1);
        i++;
        while(i<size){
            s2+=s[i];
            i++;
        }
        b=stoll(s2);
        cout<<a+b<<endl;
        
    }
    return 0;
}