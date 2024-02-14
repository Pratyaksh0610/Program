#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int> m;

    while(n--){
        string s;
        cin>>s;
        m[s]++;
    }
    string ans;
    int maxi=INT_MIN;
    for(auto i:m){
        if(i.second>maxi){
            ans=i.first;
            maxi=i.second;
        }
    }
    cout<<ans<<endl;

    return 0;
}