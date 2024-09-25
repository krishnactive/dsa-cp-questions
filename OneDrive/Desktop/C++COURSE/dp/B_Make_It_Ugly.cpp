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

void solve() {
    int n;
    cin>>n;
    vector<int> a,b;
    set<int> fre;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
        a.push_back(x);
        fre.insert(x);
    }
    if(fre.size()==1){cout<<"-1\n";return;}

    for(int i=0;i<n-2;i++){
        if(b[i]!=b[i+1]){
            if(b[i]!=b[i+2]){
                cout<<"-1\n";
                return;
            }
            else{
                b[i+1]=b[i];
            }
        }
    }
    int ans=1e9;
    int temp = 0;
    for(int i=0;i<n;i++){
        if(a[0]==a[i])temp++;
        else{
            ans = min(ans, temp);
            temp=0;
        }
        if(i==n-1){
            if(temp!=0)
                ans = min(temp, ans); 
        }
    }

 cout<<ans<<"\n";
return;


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
