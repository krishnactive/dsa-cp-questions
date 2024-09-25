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
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    int a,b;
    cin>>a>>b;
    vector<vector<char>> v(a, vector<char>(b));
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < b; ++j) {
            cin >> v[i][j];
        }
    }
    
    int m1=0 , m2=0;
    int ans1=0,ans2=0;
    bool p1=true, p2 =true;
    for(int i=0;i<a;i++){
        int t1=0;
        ans1=i;
        for(int j=0;j<b;j++){
            if(v[i][j]=='#')t1++;
        }
        if(m1>t1){p1=false;ans1=i;break;}
        m1=max(m1,t1);
    }
    for(int i=0;i<b;i++){
        int t2=0;
        ans2=i;
        for(int j=0;j<a;j++){
            if(v[j][i]=='#')t2++;
        }
        if(m2>t2){p2=false; ans2=i;break;}
        m2=max(m2,t2);
    }
    if(p1)ans1++;
    if(p2)ans2++;
  cout<<(ans1)<<" "<<(ans2)<<"\n";

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
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
