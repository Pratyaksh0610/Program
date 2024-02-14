#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int main()
{
    ll n;
    cin >> n;
    vector<ll> c;
    vector<ll> d;
    if (n == 1 || n == 2)
    {
        cout << "No" << endl;
        return 0;
    }
    // else if (n % 2 == 0)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         if (i % 2 != 0)
    //         {
    //             c.push_back(i);
    //         }
    //         else
    //         {
    //             d.push_back(i);
    //         }
    //     }
    // }
    else
    {
        for (int i = 1; i <= n - 1; i++)
        {
            c.push_back(i);
        }
        d.push_back(n);
    }
    cout << "Yes" << endl;
    cout << c.size() << " ";
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;
    cout << d.size() << " ";
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
    return 0;
}