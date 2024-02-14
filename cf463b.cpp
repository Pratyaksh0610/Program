#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll cash = arr[0];
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll diff = (arr[i] - arr[i + 1]);
        // cout << "diff is " << diff << endl;
        sum += diff;
        // cout << "sum is " << sum << endl;
        if (sum < 0)
        {
            cash += abs(sum);
            // cout << "Cash is " << cash << endl;
            sum = 0;
        }
    }
    cout << cash << endl;
    return 0;
}