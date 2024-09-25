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
	ll n,p,l,t;
    cin>>n>>p>>l>>t;
ll t_c = (n-1)/7+1;
ll t_2 = t_c/2;
ll ans = 0;
ll i = t_2;

ll loo=0;
ll hii=t_2;
while(hii>=loo){
    ll mid = hii - (hii-loo)/2;
    ans = 2*t*mid+l*mid;
    if(ans>=p){
        i=mid;
        hii = mid-1;
    }
    else{
        loo = mid+1;       
    }
}
ans = 2*i*t+l*i; 
if(ans>=p){
    cout<<n-i<<"\n";
    return;
}

i = t_2;
ans = 2*i*t+i*l;
// for(i ;i<=t_2;){
//     ans = 2*t*i+l*i;
//     if(ans>=p){
//         cout<<n-i<<"\n";
//         return;
//     }
    
//     i++;
// }

// i--;
if(t_2*2!=t_c){
    ans += (t+l);
    i++;
    if(ans>=p){
        cout<<n-i<<"\n";
        return;
    }
    
}
n -= i;
ll lo = 1;
ll hi = n;
ll j = 0;

while(hi>=lo){
    ll mid = hi - (hi - lo)/2;

    if(ans+l*mid>=p){
        hi = mid-1;
        j = mid;
    }
    else{
        lo = mid+1;
        
    }
}    
cout<<n-j<<"\n";
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


