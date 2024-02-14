#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll tot = n * m;
        if (tot % 2 == 0)
        {
            cout << tot / 2 << endl;
            continue;
        }
        else
        {
            cout << tot / 2 + 1 << endl;
            continue;
        }
    }
    return 0;
}