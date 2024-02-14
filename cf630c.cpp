#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;
ll ans = 0;
ll f(ll n)
{
    if (n == 1)
    {
        ans += 2;
        return 2;
    }
    ll a = f(n - 1);
    ans += a * 2;

    return a * 2;
}
int main()
{
    ll n;
    cin >> n;
    f(n);
    // cout << f(n) - 1 << endl;
    cout << ans << endl;
    return 0;
}