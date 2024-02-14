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
        vector<int> fun(n, 0);
        map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
        {

            cin >> fun[i];
            m[fun[i]]++;
            // s.insert(temp);
        }
        sort(fun.begin(), fun.end());
        int prev = -1;
        int curr = 0;
        ll ans = 0;
        int i = 0;
        while (i < n)
        {
            // cout << "I is " << i << endl;
            if (prev == -1)
            {
                prev = fun[i];
                curr = m[fun[i]];
            }
            else if (fun[i] != prev + 1)
            {
                ans += curr;
                prev = fun[i];
                curr = m[fun[i]];
            }
            else
            {
                if (curr > m[fun[i]])
                {
                    ans += curr - m[fun[i]];
                }
                curr = m[fun[i]];
                prev = fun[i];
            }
            i += m[fun[i]];
        }
        cout << ans + curr << endl;
    }
    return 0;
}