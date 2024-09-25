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



int sumDigit (int test) {
    int ans = 0;
    while (test) {
        ans += test % 10;
        test /= 10;
    }
    return ans;
}

bool isOneDigit (int test) {
    return test <= 9;
}



void solve() {
    int n, q;
        cin >> n >> q;
 
        int a[n + 5];
        set<int> all;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            all.insert(i);
        }
 
        while (q--) {
            int que;
            cin >>que;
            if (que==1) {
                int left, right;
                cin >> left >> right;
 
                int last = left;
 
                for (int i = left; i <= right; i++) {
                    auto it = all.lower_bound(last);
                    if (it == all.end()||*it > right) break;
                    last = *it + 1;
                    a[*it]=sumDigit(a[*it]);
                    if(isOneDigit(a[*it]))all.erase(all.find(*it));
                }
            }
            else{
                int x;
                cin>>x;
                cout<<a[x]<<"\n";
            }
        }
    
    return;
}

int main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
