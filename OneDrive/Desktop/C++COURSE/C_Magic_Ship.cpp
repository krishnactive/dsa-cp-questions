#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define lld long double
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vl vector<ll>
#define ump unordered_map
#define uset unordered_set
#define mset multiset
#define minA(v) *min_element(v.begin(),v.end())
#define maxA(v) *max_element(v.begin(),v.end())
#define st(v) sort(v.begin(),v.end())
#define fin(a,n) for(int i=0;i<n;i++){ll x; cin>>x;a.pb(x);} 
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=1;i<n;i++)
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve()
{
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;
    int n;
    cin >> n;
    string s;
    cin >> s;
int u=count(s.begin(),s.end(),'U');
int  d=count(s.begin(),s.end(),'D');
int  l=count(s.begin(),s.end(),'L');
int r= count(begin(s),end(s),'R');


    auto ok = [&](int mid) -> bool {
        int ud = (mid/n)*1ll*u;
        int dd = (mid/n)*1ll*d;
        int ld = (mid/n)*1ll*l;
        int rd = (mid/n)*1ll*r;

        for(int i=0;i<mid%n;++i){
            ud+=(s[i]=='U');
            dd+=(s[i]=='D');
            ld+=(s[i]=='L');
            rd+=(s[i]=='R');
        }
        int xf = x1+(rd-ld);
        int yf = y1+(ud-dd);
        int temp =  abs(x2-xf)+abs(y2-yf);

        return  (temp <= mid);
    };



    int lo = 0;
    int hi = 1e18;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = (hi + lo) / 2;
        if (ok(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    cout << ans << "\n";
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
