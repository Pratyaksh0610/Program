#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;
ll lim = 1000000000;

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll total = (((n * (n + 1)) % m) * (4 * n - 1) % m) * 337 % m;

        cout << total << endl;
    }
    return 0;
}