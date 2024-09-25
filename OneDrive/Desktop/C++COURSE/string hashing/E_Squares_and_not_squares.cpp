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

void markPerfectSquares(vector<bool> &isPerfectSquare, int n)
{
    isPerfectSquare.assign(n + 1, false);

    for (int i = 0; i * i <= n; ++i)
    {
        isPerfectSquare[i * i] = true;
    }
}

void solve()
{
    vector<bool> ps;
    markPerfectSquares(ps, 1e9);
    ll n;
    cin >> n;
    vl a, b;
    int ss = 0, ns = 0;
    // fin(a,n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!ps[x])
        {
            ns++;
            a.push_back(x);
        }
        else
        {
            b.push_back(x);
            ss++;
        }
    }
    int ans = 0;
    if (ss == n / 2)
    {
        cout << "0\n";
        return;
    }

    if (ss < n / 2)
    {
        // st(a);
        vl dif;
        for (int i = 0; i < a.size(); i++)
        {
            int rt = sqrt(a[i]);
            a[i] = min(a[i] - 1ll * rt * rt, (rt + 1) * (rt + 1) - a[i]);
        }
        st(a);

        int i = 0;
        while (ss != n / 2)
        {
            ans += a[i];
            ss++;
            i++;
        }
    }
    else
    {
        int i = b.size() - 1;
        st(b);
        while (ns != n / 2)
        {
            ans += 1;
            if (b[i] == 0)
                ans++;
            ns++;
        }
    }
    cout << ans << "\n";
}

signed main()
{
    fastio
        srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
// This is krishna.
