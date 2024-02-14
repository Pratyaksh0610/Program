#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int fun(vector<int> &v, int n)
{
    sort(v.begin(), v.end());
    int n1 = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            n1++;
        }
        else
        {
            break;
        }
    }
    cnt += n1 / 2;
    if (n1 % 2 != 0)
    {
        cnt++;
    }
    cnt += n - n1;
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << fun(v, n) << endl;
    }
    return 0;
}