#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

bool div(string &s1, int size1, string &s2, int size2)
{
    int j = 0;
    for (int i = 0; i < size1; i++)
    {
        if (s1[i] != s2[j])
        {
            return false;
        }
        if (i == size1 - 1 && j != size2 - 1)
        {
            return false;
        }
        j = (j + 1) % size2;
    }

    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int size1, size2;
        size1 = s1.size();
        size2 = s2.size();
        if (size1 == size2)
        {
            if (s1 == s2)
            {
                cout << s1 << endl;
                continue;
            }
            else
            {
                cout << -1 << endl;
                continue;
            }
        }
        if (size2 > size1)
        {
            string temp = s1;
            s1 = s2;
            s2 = temp;
            swap(size1, size2);
        }
        bool d = div(s1, size1, s2, size2);
        if (d)
        {
            cout << s1 << endl;
            continue;
        }
        string f;
        int lcm = (size1 * size2) / __gcd(size1, size2);
        int j = 0;
        for (int i = 0; i < lcm; i++)
        {
            f += s2[j];
            j = (j + 1) % size2;
        }
        j = 0;
        bool done = false;
        for (int i = 0; i < lcm; i++)
        {
            if (f[i] != s1[j])
            {
                cout << -1 << endl;
                done = true;
                break;
            }
            if (i == lcm - 1 && j != size1 - 1)
            {
                cout << -1 << endl;
                done = true;
                break;
            }
            j = (j + 1) % size1;
        }
        if (done)
        {
            continue;
        }
        cout << f << endl;
    }
    return 0;
}