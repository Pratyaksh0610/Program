#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int fun(int a, int b, int c, int d)
{
    ll tot = a + b + c + d;
    ll used = 0;
    int al = 0;
    int bo = 0;
    if (a)
    {
        used += a;
        tot -= a;
        al = a;
        bo = a;
        a = 0;
    }
    while (tot)
    {
        if (bo < 0 || al < 0)
        {
            break;
        }
        if (b == 0 && c == 0)
        {
            break;
        }
        if (bo > b)
        {
            bo -= b;
            used += b;
            tot -= b;
            b = 0;
        }
        else if (bo < b && bo != 0)
        {
            b -= bo;
            tot -= bo;
            used += bo;
            bo = 0;
        }
        if (al > c)
        {
            al -= c;
            used += c;
            tot -= c;
            c = 0;
        }
        else if (al < c && al != 0)
        {
            c -= al;
            tot -= al;
            used += al;
            al = 0;
        }
    }
    int mini = min(al, bo);
    if (d == 0)
    {
        return used;
    }
    if (mini == 0)
    {
        used += 1;
        return used;
    }
    else if (mini < d)
    {
        used += mini;
    }
    else
    {
        used += d;
    }
    return used;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << fun(a, b, c, d) << endl;
    }
    return 0;
}