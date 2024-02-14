#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m=1000000000+7;
    
int main(){
    string s;
    string l;
    cin>>s>>l;
    ll size=s.size();
    bool eq=true;
    for(int i=0;i<size;i++){
        if(s[i]>'Z'){
            s[i]-=32;
        }
        if(l[i]>'Z'){
            l[i]-=32;
        }
        if(s[i]!=l[i]){
            eq=false;
        }
    }
    if(eq){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<size;i++){
        if(s[i]>l[i]){
            cout<<1<<endl;
            return 0;
        }
        else if(l[i]>s[i]){
            cout<<-1<<endl;
            return 0;
        }
    }
    return 0;
}