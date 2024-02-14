#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[n + 1];
        arr[0] = -1;
        arr[1] = x;
        arr[n] = 1;

        bool check[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            check[i] = false;
        }
        check[0] = true;
        check[1] = true;
        check[x] = true;

        for (int i = 2; i < x; i++)
        {
            arr[i] = i;
            check[i] = true;
        }
        bool b = false;
        ;
        for (int i = x; i < n; i++)
        {
            bool ans = true;
            for (int j = i; j < n + 1; j++)
            {
                if (check[j] == false && i == j)
                {
                    arr[i] = j;
                    check[j] = true;
                    ans = false;
                    break;
                }
                else if (check[j] == false && (n % j == 0 && j % i == 0))
                {
                    arr[i] = j;
                    check[j] = true;
                    ans = false;
                    break;
                }
            }
            if (ans)
            {
                cout << "-1" << endl;
                b = true;
                break;
            }
        }
        if(b){
            continue;
        }
        for (int i = 1; i < n + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}