#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int maxi=2*n+1;
    for(int i=0;i<n;i++){
        int emp=2*(n-i);
        int fill=maxi-emp;
        emp/=2;
        while(emp--){
            cout<<"  ";
        }
        int k=0;
        while(k<=fill/2){
            cout<<k++<<" ";
        }
        k--;
        while(--k>=0){
            if(k==0){
                cout<<k;
                break;
            }
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<=n;i++){
        int fill=2*(n-i);
        int emp=2*n+1-2*(n-i);
        emp/=2;
        while(emp--){
            cout<<"  ";
        }
        int k=0;
        while(k<=fill/2){
            cout<<k++<<" ";
        }
        k--;
        while(--k>=0){
            if(k==0){
                cout<<k;
                break;
            }
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}