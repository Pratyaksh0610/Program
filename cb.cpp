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

void printDivisors(ll n)
{
    // Note that this loop runs till square root
    ll prev = 0;
    ll cnt = 0, ans = 0;
    bool switch1 = true;
    bool switch2 = true;
    ll mini = sqrtl(n);
    mini = min((ll)1e8, n);
    // mini = min(mini, (ll)1e9);
    for (ll i = 1; i <= mini; i++)
    {
        if (n % i == 0)
        {
            if (prev == (i - 1))
            {
                cnt++;
                prev = (i);
            }
            else
            {
                // cnt++;
                ans = max(ans, cnt);
                cnt = 1;
                prev = i;
                if (switch1 == false)
                {
                    switch2 = false;
                }
                switch1 = false;
            }
            // If divisors are equal, print only one
            // if (n / i == i)
            // {
            //     cout << " " << i << endl;
            // }
            // else
            // { // Otherwise print both
            //     cout << " " << i << " " << n / i << endl;
            // }
        }
        if (switch2 == false)
        {
            break;
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
    return;
}

void fun()
{
    ll n;
    cin >> n;
    printDivisors(n);
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