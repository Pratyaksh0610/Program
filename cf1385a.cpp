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
        ll x, y, z;
        cin >> x >> y >> z;
        int maxi = max(x, max(y, z));
        if (x != y && y != z && z != x)
        {
            cout << "NO" << endl;
            continue;
        }
        if (x == y)
        {
            if (x != maxi)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            cout << x << " " << z << " " << z << endl;
        }
        else if (y == z)
        {
            if (y != maxi)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            cout << x << " " << x << " " << z << endl;
        }
        else
        {
            if (x != maxi)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            cout << y << " " << z << " " << y << endl;
        }
    }
    return 0;
}