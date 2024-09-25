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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    vl a;
    fin(a,n);
    st(a);
    if(k>=x&&x>=n){
        cout<<"0\n";
        return;
    }
ll sum=0;
ll suf=0;
    for(auto& xx:a)sum+=xx;
int ct=0;
    for(int i=n-1;i>=0;i--){
        suf+=a[i];
        ct++;
        if(ct==x)break;
    }
    ll ans = -1e9;
    ll temp=sum;
    ll ps=0;
ll cv=0;
ll to=0;
if(n==k)to--;
  for(int i=n-1;i>=to;i--){
        temp-=suf*2;
        ans = fmax(ans,temp);
        cv++;
        if(k+1==cv)break;
        ps+=a[i];
        temp = sum-ps;
        suf-=a[i];
        if(i-x<0){   
            x=i; 
            }
        else
        suf+=a[i-x];     
  }
  cout<<ans<<"\n";

}

int main() {
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