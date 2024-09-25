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
    ll n;
    cin>>n;
//     vl a;
//     fin(a,n);
//     ll sum=0;
//     ll es=0;
//     ll os =0;
//   for(int i=0;i<n;i++){
//     sum+=a[i];
//     if(i%2==0){
//         os++;

//     }
//     else es++;
//     ll rem = os/3;
//     if(es==0&&os==1) rem=0;
//     else if(os%3==1) rem=(os+2)/3;
//     cout<<sum-rem<<" ";
//   }
//   cout<<"\n";
int k,sum=0; 
for ( int i=0 ;i<n;i++) { 
    cin>>k; sum+=k; 
    if (i%2==0) 
    cout <<sum<<" "; 
    else cout <<sum-1<<" "; 
    } 
    cout<<endl;


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
