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
    // ll n;
    // cin>>n;
    // vl a;
    // fin(a,n);
    // for(int i=0;i<3;i++){

    // }
    string a,b,c;
    cin>>a>>b>>c;
    string s;

    for(auto x:a){
        if(x=='?'){
            for(auto y:a) s.pb(y);
            // s=a;
            break;
        }
    }
     for(auto x:b){
        if(x=='?'){
                        for(auto y:b) s.pb(y);

            // s=b;
            break;
        }
    }
 for(auto x:c){
        if(x=='?'){
                        for(auto y:c) s.pb(y);

            // s=c;
            break;
        }
    }  
bool x=false,y=false,z=false;
// s="BBB";
    for(auto e:s){
        if(e=='A'){
            x=true;
        }
        else if(e=='B') y=true;
        else if(e=='C') z=true;
    }
// if(!y&&!z) cout<<"A\n";
// else if(!x&&!z)cout<<"B\n";
// else cout<<"C\n";
if(!x) cout<<"A\n";
if(!y) cout<<"B\n";
if(!z) cout<<"C\n";
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
