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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool pass =true;
    ll mx_len=0;
    ll temp=0;
    ll twc=0;
    ll wc=0;
    bool pass1=false;
    for(int i=0;i<s.size();i++){
        char x=s[i];
        if(x=='(')pass=false;
        // else if(x==')')pass=true;
        if(pass){
            twc=0;
            if(x!='_'&&x!='('&&x!=')'){
                temp++;
                mx_len=max(mx_len,temp);
            } 
            else{
                mx_len=max(mx_len,temp);
                temp=0;
            }   
        }
        else{
            temp=0;
            if(x!='_'&&x!='('&&x!=')'){
                twc++;
                pass1=true;
            }
            else if(x!=')'&&x!='('){
                if(twc)wc++;
                twc=0;
            }

            if(x==')'){
                if(s[i-1]!='_'&&s[i-1]!='(')wc++;
                twc=0;
                pass=true; 
                pass1=false;
            }
        }
    }
  cout<<mx_len<<" "<<wc<<"\n";

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
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
