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
    int n;
    cin>>n;
    
    int nv=0;
    int cz=0;
    ll sum=0;
    vi a;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(x<0){ nv++; x*=-1; }
        if(x==0) cz++;
        sum+=x;
        a.pb(x);
    }
    // cout<<sum<<"\n";
if((nv%2==0)||((nv+cz)%2==0)) cout<< sum<<"\n";
else{
    int mn = *min_element(a.begin(),a.end());
    sum-=2*mn;
    cout<<sum<<"\n";
}



    /*int sum =0;
    int i = 0;
    int j = 1;
 while (j<a.size())
    {   
        if((a[i]<=0)&&(a[j]<=0)){
            a[i]*=-1;
            a[j]*=-1;

        }
        i++;j++;
    }
i=0;j=1;



    while (j<a.size())
    {   
        
         if((a[i]<=0)||(a[j]<=0)){
            if((abs(a[i])>abs(a[j])&&a[i]<0)||(abs(a[i])<abs(a[j])&&a[j]<0)){
                a[i]*=-1;
                a[j]*=-1;
            }

        }
           i++;
            j++;
            if(j==n) break;
            
    }
    for(auto &x:a){
        sum+=x;
    }
    cout<<sum<<"\n";*/
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


