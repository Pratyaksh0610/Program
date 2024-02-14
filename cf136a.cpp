#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>m;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        m[a]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
    return 0;
}