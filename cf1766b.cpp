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
        string s;
        cin>>s;
        bool check=false;
        unordered_map<string,pair<ll,ll>> m;
        for(int i=0;i<n;i++){
            string a=s.substr(i,2);
            if(m.find(a)==m.end()){
                    pair<ll,ll> p;
                    p.first=i;
                    p.second=i+1;
                    m[a]=p;
                    continue;
                }
            if(a[0]==a[1]){
                pair<ll,ll> p=m[a];
                if(p.first!=i&&p.second!=i+1&&p.second!=i&&p.second!=i+1){
                    check=true;
                    break;
                }
                else{
                    continue;
                }
            }
            if(m.find(a)!=m.end()){
                check=true;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}