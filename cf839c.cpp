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
        ll k;
        cin >> k;
        ll n;
        cin >> n;
        bool arr[n];

        if (k == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = false;
        }
        arr[0] = true;
        arr[n - 1] = true;
        int si = 0;
        int ei = n - 1;
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(n);
        k -= 2;
        int count = 0;
        while (k > 0)
        {
            if (count % 2 == 0)
            {
                si = 0;
                ei = n - 1;
                while (arr[si] != false)
                {
                    si++;
                }
                si--;
                while (arr[ei] != false)
                {
                    ei--;
                }
                ei++;
                count++;
            }
            else if (count % 2 != 0)
            {
                si = 0;
                ei = n - 1;
                while (arr[si] != false)
                {
                    si++;
                }
                si--;
                while (arr[ei] != false)
                {
                    ei--;
                }
                ei++;
                count++;
            }

            while (si < ei && k > 0)
            {
                int mid = (si + (ei - si) / 2);
                if (arr[mid] == true)
                {
                    ei = mid;
                }
                else
                {
                    arr[mid] = true;
                    ans.push_back(mid + 1);
                    k--;
                    ei = mid;
                }
            }
        }

        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}