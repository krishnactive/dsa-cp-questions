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
    vl a;
    fin(a,n);
    vl nv,pv,zo;
    ll yass = 0;
    for(auto &x:a){
        yass+=x;
        // if(x>0)yass+=x;
        // else if(x<0)nv.pb(x);
    }
//     st(nv);
//     st(pv);
//  yass+=(nv.size()>0 ? nv[0]:0);

ll mx = -1e18;
ll temp =0;
bool pass = true;
bool pass2 = true;
set<int> mv;
for(int i=0;i<n;i++){
    temp+=a[i];
    mx = fmax(temp,mx);
    mv.insert(mx);
    if(temp<mx&&pass2)pass =true;
    if(temp<=0){
        pass2 = false;
        pass = false;

        temp=0;
    }
}
// st(mv);
// if(pass)
// mx = fmax(mx-a[0],mx-a[n-1]);
// 
// mx = mv[n-2];
auto it = mv.begin();
if(mv.size()==n){
    
    for(int i=0;i<n-1;i++){
        it++;
    }
}
else{
    for(int i=0;i<mv.size();i++){
        it++;
    }
}
mx = *it;
if(mx<yass)cout<<"YES\n";
else cout<<"NO\n";
// cout<<yass<<" "<<mx<<"\n";

  

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
