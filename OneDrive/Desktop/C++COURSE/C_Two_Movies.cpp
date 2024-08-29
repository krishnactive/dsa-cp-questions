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

void solve() {
    ll n; cin>>n;
    vl a , b;
    fin(a,n); fin(b,n);
    int a1=0 , b1=0;
int z1=0, z2 = 0;
    for(int i = 0;i<n;i++){
        if(a[i]==1)a1++;
        if(b[i]==1)b1++;
        if(a[i]==0)z1++;
        if(b[i]==0)z2++;
    }
int m1=0,m2=0;
int ms1 = 0 , ms2 =0;
    for(int i = 0;i<n;i++){
        if(a[i]==1&&b[i]!=1){
            m1++;
            a1--;
            ms1=ms2=0;
        }
        else if(a[i]!=1&&b[i]==1){
            m2++;
            b1--;
             ms1=ms2=0;
        }
        else if(a[i]==1&&b[i]==1){
            a1--;
            b1--;
            if(b1>a1)m1++;
            else if(b1==a1){
                if(m1>m2)m2++;
                else m1++;
            }
            else m2++;
             ms1=ms2=0;
            
        }
        else if(a[i]==-1&&b[i]==-1){
            if(b1-ms2>a1-ms1)m2--,ms2++;
            else if(a1-ms1==b1-ms2){
                ms1++,ms2++;
                if(m1>m2)m1--;
                else m2--;
            }
            else m1--,ms1++;
        }
    }
cout<<min(m1,m2)<<"\n";
  

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