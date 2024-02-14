#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<string,int> m;
        bool pos=false;
        for(int i=0;i<s.size()-1;i++){
            char a=s[i];
            char b=s[i+1];
            if(a==b){
                continue;
            }
            string a1;
            a1+=a;
            a1+=b;
            if(m.find(a1)!=m.end()){
                cout<<"YES"<<endl;
                pos=true;
                break;
            }
            m[a1]++;
        }
        char temp;
        int mcount=0;
        if(pos){
            continue;
        }
        for(int i=0;i<s.size()-1;i++){
            temp='s[i]';
            int ccount=0;
            for(int j=i;j<s.size();j++){
                if(s[j]==temp){
                    ccount++;
                }
                else{
                    break;
                }
            }
            mcount=max(ccount,mcount);
        }
        if(mcount>3){
            cout<<"YES"<<endl;
            pos=true;
        }
        if(pos){
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}