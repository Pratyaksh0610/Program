#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll m = 1000000000 + 7;

int main()
{
    string f;
    cin >> f;
    string b = f;
    reverse(b.begin(), b.end());
    f = f + b;
    cout << f << endl;
    return 0;
}