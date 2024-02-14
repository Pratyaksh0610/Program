#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

bool solve(string &s, map<char, int> &m)
{
    int n = s.size();
    int p = -1;
    for (int i = 0; i < n; i++)
    {
        if (p == -1)
        {
            p = m[s[i]];
            continue;
        }
        if (m[s[i]] == p)
        {
            return false;
        }
        p = m[s[i]];
    }
    return true;
}

void fun()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    int prev = -1;
    bool used = false;
    for (int i = 0; i < n; i++)
    {
        if (m.find(s[i]) == m.end())
        {
            m[s[i]] = prev + 1;
        }
        else if (m[s[i] == prev + 1])
        {
        }
        else if (m[s[i]] != prev + 1)
        {
            if (used)
            {
                cout << "NO" << endl;
                return;
            }
            used = true;
            for (auto it : m)
            {
                int alt = 0;
                if (it.second == alt)
                {
                    it.second = alt + 1;
                }
                else
                {
                    it.second = alt;
                }
            }
        }
        prev += 1;
        if (prev >= 1)
        {
            prev = -1;
        }
    }
    bool a = solve(s, m);
    if (a)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}