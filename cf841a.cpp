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
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int i = n - 2;
        int j = n - 1;
        while (i >= 0)
        {
            if (arr[j] == 1)
            {
                break;
            }
            ll mul = arr[j] * arr[i];
            arr[j] = mul;
            arr[i] = 1;
            i--;
        }
        ll ans = 0;
        for (int k = 0; k < n; k++)
        {
            ans += arr[k];
            // cout << arr[k] << endl;
        }
        // cout << ans << endl;
        cout << 2022 * ans << endl;
    }
    return 0;
}