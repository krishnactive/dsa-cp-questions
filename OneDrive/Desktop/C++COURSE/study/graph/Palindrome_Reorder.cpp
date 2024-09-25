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
    string s;
    cin>>s;
    ll len = s.size();
    map<char,int> fre;
    
    for(auto x:s){
        fre[x]++;
    }
    if(!(len&1)){
        for(auto x:fre){
            if(x.second&1){
                cout<<"NO SOLUTION\n";
                return;
            }
        }
        vector<char>ans(len);
        for(auto &x:ans)x='#';
        int pos = 0;
        for(auto x:fre){
            int pos2=pos;
            for(int i=1;i<=x.second;i++){
                if(i<=x.second/2){
                    ans[pos2]=x.first;
                    pos2++;
                    pos=pos2;
                }
                else{pos2--;
                    ans[len-1-pos2] = x.first;
                    // pos2--;
                }
            }
            pos2=pos;
        }
for(auto x:ans)cout<<x;
    }
    else{
        int cn = 0;
for(auto x:fre){
    if(x.second&1)cn++;
    if(cn>1){
        cout<<"NO SOLUTION\n";
    }
}
 vector<char>ans(len);
        for(auto &x:ans)x='#';
        int pos = 0;
        char sx = '#';
        for(auto x:fre){
            if(!(x.second&1)){
            int pos2=pos;
            for(int i=1;i<=x.second;i++){
                if(i<=x.second/2){
                    ans[pos2]=x.first;
                    pos2++;
                    pos=pos2;
                }
                else{pos2--;
                    ans[len-1-pos2] = x.first;
                    // pos2--;
                }
            }
            pos2=pos;
        }
        else{
            sx=x.first;
        }
        }
        
for(auto x:ans)
{
    if(x=='#')cout<<sx;
    else cout<<x;
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
    
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
