#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x=0;
    while(t--){
        string s;
        cin>>s;
        int size=s.size();
        if(s[0]=='+'||s[size-1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}