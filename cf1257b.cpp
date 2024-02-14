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
        ll x, y;
        cin >> x >> y;
        if (y == x || y < x)
        {
            cout << "YES" << endl;
            continue;
        }
        if (x == 2)
        {
            if (y == 3)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }
        if (x == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (x == 3)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}