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
        ll arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 4);
        ll z = arr[2];
        ll y = arr[2];
        ll x = arr[0];
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}