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
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        ll cnt = 0;
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (cnt % 2 == 0)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
            else if (cnt % 2 == 0)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
            cnt++;
        }
    }
    return 0;
}