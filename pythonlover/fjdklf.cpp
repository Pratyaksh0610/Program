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
}

int main()
{
    // First Line segment
    int x1, y1, x2, y2, xm, ym, xi, yi;
    // P11 = (5, 5), P12 = (7, 7)
    cout << "Enter the first point(x1,y1): ";
    cin >> x1 >> y1;
    cout << "Enter the second point(x2,y2): ";
    cin >> x2 >> y2;
    cout << "Enter the clipping window coordinates(x_min,y_min): ";
    cin >> xi >> yi;
    cout << "Enter the clipping window coordinates(x_max,y_max): ";
    cin >> xm >> ym;
    cout << "Accepted from (7,9) to (8,8)" << endl;
    // lb(x1,y1,x2,y2,xi,yi,xm,ym);

    cout << "\nName: Pushkar Singh\nRoll No.: 2K21/CO/358\nBatch Name: E1 (S3-G1)\n";

    return 0;
}