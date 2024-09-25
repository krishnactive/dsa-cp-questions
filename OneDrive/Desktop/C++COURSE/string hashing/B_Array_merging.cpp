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
    vl a,b;
    fin(a,n);
    fin(b,n);
    // vector<int> fre(2*n+7,0);
    vector<int> fre2(2*n+7,0);
    unordered_map<int, int> fre;
    unordered_map<int, int> lengthMap2;
    int currentLength = 0;
    ll temp=0;
    for (int i = 0; i < n; ++i) {
        currentLength++;
        temp++;
        
            if(fre[a[i]]==0){
                fre[a[i]]=max(fre[a[i]],currentLength);
                // temp=0;
                currentLength=0;
                if(fre[a[i+1]]&&i<n-1)temp=0;
            }
            else{
                fre[a[i]]=max(fre[a[i]],temp);
                // temp=1;
            }
            
            // if(i==n-1){

            // }
            // fre[a[i]]=max(fre[a[i]],temp);
    }
    for(auto x:fre){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    cout<<"\n";
    // currentLength = 0;
    //  for (int i = 0; i < n; ++i) {
    //     if (lengthMap2.find(b[i]) == lengthMap2.end()||i - lengthMap2[b[i]] > 1) {
    //         currentLength = 1;
    //     } else{
    //         currentLength++;
    //     }

    //     lengthMap2[b[i]] = max(lengthMap2[b[i]] ,currentLength);
    // }
    // ll mx = 0;
    // for(int i=0;i<2*n+7;i++){
    //     if(mx<(lengthMap1[i]+lengthMap2[i]))mx=lengthMap1[i]+lengthMap2[i];
    // }
    // cout<<mx<<"\n";

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
