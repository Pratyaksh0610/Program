#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int count=0;
        
        int n=num;
        while(n){
            if(n%10!=0){
                count++;
            }
            n=n/10;
        }
        cout<<count<<endl;

        int i=0;
        while(num){
            if(num%10!=0){
            cout<<(num%10)*pow(10,i)<<" ";
            }
            i++;
            num=num/10;
        }
        cout<<endl;
    }
    return 0;
}