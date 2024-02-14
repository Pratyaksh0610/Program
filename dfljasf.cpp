#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef priority_queue<ll,vector<ll>,greater<ll>> minpq;
typedef priority_queue<ll> maxpq;
    
#define all(x) x.begin(),x.end()
#define yes cout<<YES<<endl
#define no cout<<NO<<endl
#define pb(x) push_back(x)
#define rsrt(x) sort(x.rbegin(),x.rend())
#define srt(x) sort(x.begin(),x.end())
#define fr(i,a,n) for(int i=a;i<n;i++)
    
const int m=1000000000+7;
    
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
#include <bits/stdc++.h>
using namespace std;

// int main() {

// 	int V = 4;
// 	vector<vector<int>> matrix(V, vector<int>(V, -1));
// 	matrix[0][1] = 2;
// 	matrix[1][0] = 1;
// 	matrix[1][2] = 3;
// 	matrix[3][0] = 3;
// 	matrix[3][1] = 5;
// 	matrix[3][2] = 4;

// 	Solution obj;
// 	obj.shortest_distance(matrix);

// 	for (auto row : matrix) {
// 		for (auto cell : row) {
// 			cout << cell << " ";
// 		}
// 		cout << endl;
// 	}

// 	return 0;
// }

void fun(){
        ll n;
        cin >> n;
        map<int, int> m;
        vi va(n,0);
        vi l(n,INT_MAX),r(n,INT_MAX);
        // vi va(n,0);
        fr(i,0,n){
            cin>>va[i];
        }
        m[0] = 1;
        m[n - 1] = -1;
        for (int i = 1; i < n - 1; i++)
        {
            ll l = abs(va[i] - va[i - 1]);
            ll r = abs(va[i] - va[i + 1]);
            if (l < r)
            {
                m[i] = -1;
            }
            else
            {
                m[i] = 1;
            }
        }
        l[0] = 0;
        for (int i = 1; i < n; i++)
        {
            if (m[i] == -1)
                l[i] = 1 + l[i - 1];
            else
                l[i] = l[i - 1] + abs(va[i] - va[i - 1]);
        }
        r[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (m[i] == 1)
            {
                r[i] = 1 + r[i + 1];
            }
            else
            {
                r[i] = r[i + 1] + abs(va[i] - va[i + 1]);
            }
        }
        ll testet;
        cin >> testet;

        while (testet--)
        {
            ll a, b;
            cin >> a >> b;
            if (a == b)
            {
                cout << 0 << endl;
            }
            else
            {
                // cout<<"ANS : ";
                if (b > a)
                {

                    cout << r[a - 1] - r[b - 1] << endl;
                }
                else
                {
                    cout << l[a - 1] - l[b - 1] << endl;
                }
            }
        }
    }
    
int main(){
    
 int t;
 cin>>t;
 while(t--){
  fun();
 }
    return 0;
}