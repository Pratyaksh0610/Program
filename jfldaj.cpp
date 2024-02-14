#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

ll fun(ll a, ll b, ll c, ll d)
{
    if (a == 0)
    {
        if (b || c || d)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    ll sub = b + c + d - 2 * (min(b, c));
    ll diff = abs(b - c);

    ll ans = a + 2 * min(b, c);
    ll more = a + 1;
    ans += min(more, sub);
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << fun(a, b, c, d) << endl;
    }
    return 0;
}