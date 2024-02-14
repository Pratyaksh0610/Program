#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef priority_queue<ll, vector<ll>, greater<ll>> minpq;
typedef priority_queue<ll> maxpq;

#define all(x) x.begin(), x.end()
#define yes cout << YES << endl
#define no cout << NO << endl
#define pb(x) push_back(x)
#define rsrt(x) sort(x.rbegin(), x.rend())
#define srt(x) sort(x.begin(), x.end())
#define fr(i, a, n) for (int i = a; i < n; i++)

const int m = 1000000000 + 7;

/*class p{
public:
int a,b;
p(int x,int y){
a=x,b=y;
}
p(){}
};*/
/*class compa{
public:
bool operator()(p &t1,p &t2)
if(t1.b>t2.b){return true;}
return false;
};*/
void fun()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ss = s;
    vi v(n, -1);
    vi index;
    int prev = 0;
    int ind = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        int p = s[i];
        // v[i] = ind;
        if (p >= prev)
        {
            index.pb(i);
            prev = p;
            ind = i;
        }
    }
    vi helper = index;
    reverse(index.begin(), index.end());
    int same = 0;
    int st = s[index[0]];
    // cout << index[0] << endl;
    int k = 0;

    while (k < index.size() && (int)s[index[k]] == st)
    {
        k++;
        same++;
    }
    // cout << "i " << index.size() << " " << same << endl;
    same--;
    int change = index.size() - 1 - same;
    for (int i = 0; i < index.size(); i++)
    {
        ss[index[i]] = s[helper[i]];
    }
    fr(i, 1, n)
    {
        if (ss[i] < ss[i - 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << change << endl;
    return;
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