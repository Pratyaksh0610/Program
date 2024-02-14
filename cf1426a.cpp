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
        ll n;
        cin >> n;
        ll x;
        cin >> x;
        n -= 2;
        ll floor = 1;
        while (n > 0)
        {
            n -= x;
            floor++;
        }
        cout << floor << endl;
    }
    return 0;
}