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
        string s;
        cin >> s;
        bool r = false;
        bool l = false;
        bool done = false;
        int lind = 0;
        bool sw = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L' && r)
            {
                cout << 0 << endl;
                done = true;
                break;
            }
            if (s[i] == 'R' && (i != 0 && s[i - 1] == 'L'))
            {
                lind = i;
                cout << lind << endl;
                done = true;
                break;
            }
            if (s[i] == 'R')
            {
                r = true;
            }
            else if (s[i] == 'L')
            {
                l = true;
            }
        }
        if (done)
        {
            continue;
        }
        cout << -1 << endl;
    }
    return 0;
}