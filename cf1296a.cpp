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
        int arr[n];
        bool odd = false;
        bool even = false;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0)
            {
                even = true;
            }
            else
            {
                odd = true;
            }
        }

        if (sum % 2 != 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (odd)
        {
            if (n % 2 != 0)
            {
                cout << "YES" << endl;
                continue;
            }
            else if (n % 2 == 0 && even)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}