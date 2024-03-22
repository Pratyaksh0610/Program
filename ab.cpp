#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

typedef long long ll;
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>,
                         __gnu_pbds::rb_tree_tag,
                         __gnu_pbds::tree_order_statistics_node_update>
    ordered_set; // find_by_order , order_of_key, can change less to less_equal
                 // to great
typedef pair<int, int> pi;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef priority_queue<ll, vector<ll>, greater<ll>> minpq;
typedef priority_queue<ll> maxpq;

#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define rsrt(x) sort(x.rbegin(), x.rend())
#define srt(x) sort(x.begin(), x.end())
#define fr(i, a, n) for (int i = a; i < n; i++)

const int m = 1e9 + 7;

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

void fun() {}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 1; i < 1e5; i++) {
    int mod = 1e8 + 7;
    ll value = rand();
    ll ans = (value * (ll)(1e9)) % mod;
    cout << ans << ",";
  }

  return 0;
}