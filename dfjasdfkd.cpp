#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef priority_queue<ll,vector<ll>,greater<ll>> minpq;
typedef priority_queue<ll> maxpq;
    
#define all(x) x.begin(),x.end()
#define yes cout<<YES<<endl
#define no cout<<NO<<endl
#define pb(x) push_back(x)
#define rsrt(x) sort(x.rbegin(),x.rend())
#define srt(x) sort(x.begin(),x.end())
#define fr(i,a,n) for(int i=a;i<n;i++)
    
const int m=1000000000+7;
    
/*class p{
public:
int a,b;
p(int x,int y){
a=x,b=y;
}
p(){}
};*/
/*class compa{
public:
bool operator()(p &t1,p &t2)
if(t1.b>t2.b){return true;}
return false;
};*/
ll nCr(ll n, ll r) {
    double sum = 1;
        for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
        // cout<<(int)sum<<endl;
        return sum;
}

void fun(){
    ll n;
    cin>>n;
    vi v(n,0);
    fr(i,0,n){
        cin>>v[i];
    }

    map<int,int>m;
    fr(i,0,n){
        m[v[i]]++;
    }
    ll tot=0;
    ll ans=0;
    for(auto it:m){
        
        ans+=nCr(it.second,3)+(nCr(it.second,2)*nCr(tot,1));
        tot+=it.second;
    }
    cout<<ans<<endl;
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