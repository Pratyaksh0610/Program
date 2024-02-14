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
ll dope = 0;
ll ff(ll a, map<ll, ll> &m, unordered_map<ll, bool> &done)
{
    if (m.find(a) == m.end())
    {
        return 0;
    }
    if (m.find(2 * a) == m.end())
    {
        return 1;
    }
    dope += ((m[a] - 1) * (m[a])) / 2;
    ll ans = ff(2 * a, m, done) * m[a];
    done[a] = true;
    return ans;
}
void fun()
{
    int n;
    cin >> n;
    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    ll ans = 0;
    unordered_map<ll, bool> done;
    for (auto it : m)
    {
        if (done[it.first] == true)
        {
            continue;
        }
        cout << it.first << endl;
        ll ele = it.first;
        ll same = (m[ele] * (m[ele] - 1)) / 2;
        ll a = m[a] * ff(2 * ele, m, done);
        // ans += a + same + dope;
        ans += a + same + dope;
        dope = 0;
    }
    cout << "dkfja :" << ans << endl;
    return;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}