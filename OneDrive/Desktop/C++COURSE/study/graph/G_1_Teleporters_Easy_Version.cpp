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

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    int n , k;
    cin>>n>>k;
    vi a ,b;
    int nn=n-1;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        // x+=i;

        a.push_back(x+i);
        // b.push_back(x+nn);
        // cout<<a[i-1]<<" "<<b[i-1]<<"\n";
        nn--;
    }
    // cout<<"\n";
    st(a);
    // st(b);
    int ans =0;
    int j=0;
    for(int i = 0;i<n;){
        if(a[i]<=k){
            ans++;
            k-=a[i];
            i++;
        }
        // else if(a[i]<=b[j]&&a[i]<=k){
        //      ans++;
        //     k-=a[i];
        //     i++;
        // }
        // else if(a[i]>=b[j]&&b[j]<=k){
        //     ans++;
        //     k-=b[j];
        //     j++;
        // }
        else {
            cout<<ans<<"\n";
            return;
        }
        if(i==n){
            cout<<ans<<"\n";
            return;
        }
    }
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


