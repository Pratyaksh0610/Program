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
        ll n, k;
        cin >> n >> k;
        for (int i = 0; i < n / 2; i++)
        {
            cout << n - i << " " << i + 1 << " ";
        }
        if (n % 2 != 0)
        {
            cout << n / 2 + 1;
        }
        cout << endl;
    }
    return 0;
}