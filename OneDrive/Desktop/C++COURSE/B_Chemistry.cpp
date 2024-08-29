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
    int n , k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<char,int>fre;
    for(auto x: s){
        fre[x]++;
    }

    int sum = 0;
    for(auto x:fre){
        if(x.second%2==1){
            sum++;
        }
    }
if(k<sum-1){cout<<"NO\n";}
else cout<<"YES\n";


// bool pass = true;
//     for(auto x:fre){
//         if(x.second%2==1){
//             if((sum-x.second==k)){
//                 cout<<"YES\n";
//                 return;
//             }
//             pass = false;
//         }
        
//     }
// if(pass){
//     cout<<"YES\n";
//     return;
// }
//     cout << "NO\n";
//     return;
//     for(auto x:fre){
//         if((sum-x.second)%2==0){
//             k-=( sum - x.second );
//         }
//     }
//     if(k<0)cout<<"NO\n";
//     else{
//         cout<<"YES\n";
    // }
  

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
