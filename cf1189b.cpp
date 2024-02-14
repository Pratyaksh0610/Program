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
    sort(arr, arr + n);

    if (arr[n - 1] >= arr[n - 2] + arr[n - 3])
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for (int k = 0; k < n - 2; k++)
    {
        cout << arr[k] << " ";
    }
    if (arr[n - 1] >= arr[n - 2] + arr[0])
    {
        cout << arr[n - 1] << " " << arr[n - 2];
    }
    else
    {
        cout << arr[n - 2] << " " << arr[n - 1];
    }
    cout << endl;
    return 0;
}