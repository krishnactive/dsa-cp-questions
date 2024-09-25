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
	ll n,s;
    cin>>n>>s;
    vl a(n);
    ll z=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) z++;
    }
    if(z<s) cout<<"-1\n";
    else if(z==s)cout<<"0\n";
    else{
        ll i = 0;
        ll j = n-1;
        ll tempi = i;
        ll tempj = j;
        
bool pass = true;
        while(i<=j){
            
            if(a[i]==1){
                    if(!pass)
                    j = tempj;
                    z--;
                    i++;
                    pass = true;
                    if(z==s) {
                        cout<<n-(j-i+1)<<"\n";
                        return;
                    }
            }
            else if(a[j]==1){
                if(!pass)
                    i = tempi;
                    z--;
                    pass = true;
                     j--;
                if(z==s) {
                    cout<<n-(j-i+1)<<"\n";
                    return;      
                }
            }
            else{
                if(pass){
                    tempi = i;
                    tempj = j;
                }
                pass = false;
                i++;
                j--;
            }
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


