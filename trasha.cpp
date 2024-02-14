#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef priority_queue<ll,vector<ll>,greater<ll>> minpq;
typedef priority_queue<ll> maxpq;
    
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb(x) push_back(x)
#define rsrt(x) sort(x.rbegin(),x.rend())
#define srt(x) sort(x.begin(),x.end())
#define fr(i,a,n) for(int i=a;i<n;i++)
    
const int m=1000000000+7;
    
void fun(){
    ll n;
    cin>>n;
    vl a(n,0);
    vl b(n,0);
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    ll m1=a[n-1],m2=b[n-1];
    fr(i,0,n-1){
        ll l1=a[i],l2=b[i];
        if((m1>=l1&&m2>=l2)||(m1>=l2&&m2>=l1)){
            continue;
        }
        else{
            no;
            return;
        }
    }
    yes;
    return;
}
    
int main(){
    
 int t;
 cin>>t;
 while(t--){
  fun();
 }
    return 0;
}