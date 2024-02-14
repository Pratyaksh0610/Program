#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a;
        cin>>a;
        string s;
        ll sum=0;
        sum+=int(a[0])-48;
        for(int i=1;i<n;i++){
            if(sum>0){
                s.push_back('-');
                if(a[i]=='1'){
                    sum--;
                    continue;
                }
            }
            else {
                s.push_back('+');
            }
            sum+=int(a[i])-48;
        }
        for(int i=0;i<n-1;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}