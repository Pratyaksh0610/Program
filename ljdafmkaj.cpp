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
#define pi pair<ll, ll>
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
void fun()
{
    ll n;
    cin >> n;
    map<pi, ll> m;
    ll exist = 0;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        ll l, r;
        cin >> l >> r;
        // cout << l << " " << r << endl;
        if (ch == '+')
        {
            m[{l, r}]++;
        }
        else
        {
            m[{l, r}]--;
            if (m[{l, r}] == 0)
            {
                m.erase({l, r});
            }
        }

        if (m.size() < 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool done = false;
            for (auto it = m.begin(); it != m.end(); it++)
            {
                ll a = it->first.first;
                ll b = it->first.second;
                auto ans = m.lower_bound({b + 1, 0});
                if (ans != m.end())
                {
                    cout << "YES" << endl;
                    done = true;
                    break;
                }
            }
            if (done == false)
            {
                cout << "NO" << endl;
            }
        }
    }
}

int main()
{

    int t;
    // cin >> t;
    // while (t--)
    // {
    fun();
    // }
    return 0;
}