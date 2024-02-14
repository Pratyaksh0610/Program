#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int gcd = pow(10, c - 1);
        ll x = gcd;
        ll y = gcd;
        ll xl = pow(10, a - 1);
        ll yl = pow(10, b - 1);
        while (x < xl)
        {
            x *= 2;
        }
        while (y < yl)
        {
            y *= 3;
        }
        // cout << x << " " << y << " " << gcd << endl;
        //  cout << "REAL GCD IS " << __gcd(x, y) << endl;
        cout << x << " " << y << endl;
    }

    return 0;
}