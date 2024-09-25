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
    int a=1,b=1,c=2;
    vl ans;
    ll pro=1;
    ll nn=n;
    map<ll,bool>fre;
    for(int i=2;i*i<=n;i++){
        if(n%i==0&&!fre[i]){
            fre[i]=true;
            ans.push_back(i);
            pro*=i;
            n/=i;
        }
        if(ans.size()==2){
            if(nn%pro==0&&!fre[nn/pro]&&nn/pro>1){
            ans.push_back(nn/pro);
            }
            break;
        }
    }
    
    if(ans.size()==3){
        cout<<"YES\n";
        for(auto x:ans)cout<<x<<" ";
        cout<<"\n";
    }
    else{
        cout<<"NO\n";
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
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
