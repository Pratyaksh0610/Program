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
        if(s[0]=='1'||s[n-1]=='1'){
            cout<<2*n<<endl;
            continue;
        }
        int size=n;
        int ind=-1;
        for(int i=0;i<size;i++){
            if(s[i]=='1'){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            cout<<n<<endl;
            continue;
        }
        int maxi=2*(n-ind);
        for(int i=size-1;i>=0;i--){
            if(s[i]=='1'){
                ind=i;
                break;
            }
        }
        int m2=2*(n-(n-ind-1));
        cout<<max(maxi,m2)<<endl;
    }
    return 0;
}