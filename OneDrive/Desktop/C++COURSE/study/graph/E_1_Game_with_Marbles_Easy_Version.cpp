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
	
    ll n;
    cin>>n;
    vl a, b;
    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;
        a.pb(x);
    }
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        b.pb(x);
    }
    for(int j = 0;j <n; j++){
        if(j%2==0){
            ll temp = INT_MIN;
            int tp = 0;
            bool pass = false;


ll tempcl = INT_MIN;
int tpc = 0;
for(int i  = 0;i < n ;i ++){
    if( a[i]!=0 && b[i]!=0 && tempcl <= a[i] ){
        tempcl = a[i];
        tpc = i;
                    // pass = true;
    }
}





            for(int i = 0; i<n;i++){
                if(a[i]!=0&&b[i]!=0&& temp<=b[i]){
                    temp = b[i];
                    tp=i;
                    // pass = true;
                }
            }
            // if(pass){
            // visb[tp] = true;
            tp = ((a[tp]>tempcl)&&()?tp:tpc);
            
            b[tp]=0;
            a[tp]-=1;
            // }
        }
        else{
            ll temp = INT_MIN;
            int tp = 0;


            ll tempcl = INT_MIN;
            int tpc = 0;
            for(int i = 0; i<n;i++){
                if(a[i]!=0&&b[i]!=0&& tempcl<=b[i]){
                    tempcl = b[i];
                    tpc=i;
                    // pass = true;
                }
            }





            for(int i  = 0;i < n ;i ++){
                if( a[i]!=0 && b[i]!=0 && temp <= a[i] ){
                    temp = a[i];
                    tp = i;
                    // pass = true;
                }
            }
            // if(pass){
            // visa[tp] = true;
            tp = (b[tp]>tempcl?tp:tpc);
            a[tp]= 0;
            b[tp]-=1;
            
            // } 
        }
    }
ll ans = 0;
for(int i =0;i<n;i++){
    // cout<<a[i]<<" ";
    ans+=a[i];
    ans-=b[i];
}
// cout<<"\n";
// for(int i =0;i<n;i++){
//     cout<<b[i]<<" ";
// }

// cout<<"\n";
cout<<ans<<"\n";
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


