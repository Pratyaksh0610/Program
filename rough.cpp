#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int main()
{
    vector<vector<int>> dp(4, vector<int>(3, -1));
    dp[1][0] = 1;
    dp[1][1] = 4;
    dp[2][1] = 4007;
    dp[3][1] = 480;
    dp[0][1] = 409;
    sort(dp.begin(), dp.end());
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}