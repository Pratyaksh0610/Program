#include<iostream>
#include<string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int size=s.size();
        if(size>10){
            string ans;
            ans.push_back(s[0]);
            int diff=size-2;
            string a=to_string(diff);
            ans=ans+a;
            ans.push_back(s[size-1]);
            cout<<ans<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}