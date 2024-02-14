#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef priority_queue<ll, vector<ll>, greater<ll>> minpq;
typedef priority_queue<ll> maxpq;

#define all(x) x.begin(), x.end()
#define yes cout << YES << endl
#define no cout << NO << endl
#define pb(x) push_back(x)
#define rsrt(x) sort(x.rbegin(), x.rend())
#define srt(x) sort(x.begin(), x.end())
#define fr(i, a, n) for (int i = a; i < n; i++)

const int m = 1000000000 + 7;

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
// class DisJointSet{
//     private:
//     vector<int>rank,parent;
// };

void fun()
{
}

int main()
{

    unordered_map<int, int> m;
    m[1]++;
    m[2]++;
    // cout << m.size() << endl;
    m.erase(2);
    m.erase(1);
    m.erase(13);
    m.erase(13);
    m.erase(13);
    m.erase(13);
    for (auto it : m)
    {
        cout << it.first << endl;
    }
    // cout << m.size() << endl;
    //  int t;
    //  cin>>t;
    //  while(t--){
    // //   fun();
    //  }
    return 0;
}