#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int main()
{
    ll n;
    cin >> n;
    unsigned ll ans = n * (n + 1) * 3 + 1;
    cout << ans << endl;
    return 0;
}