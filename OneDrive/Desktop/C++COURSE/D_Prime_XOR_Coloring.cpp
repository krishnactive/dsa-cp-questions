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
const int MAXN = 1e6 + 7;
vector<bool> is_prime(MAXN, true);

// Function to initialize the sieve
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
void solve() {
    int n;
    cin>>n;
    vl ans(1e6+7,0);
  
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 2;
    int v = 2;
    int p = 3;
    int cnt= 0;
    set<int> fre;
    for(int i=4;i<=n;i++){
        int x = i^(i-1);

        // for(int j=)
        int xx= 1^(i);
    
        ans[i] = p;
        if(!is_prime[xx]){
            ans[i] = 1;
        }
        if(is_prime[x]){
            ans[i] = p;
            p++;
        }
       
    }
    for(int i=1;i<=n;i++){
        fre.insert(ans[i]);
    }
    cout<<fre.size()<<"\n";
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<"\n";

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
    sieve(); // Initialize the sieve to mark prime numbers
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
