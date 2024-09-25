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
    // vl a;
    // fin(a,n);
    deque<char> s;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        s.push_back(x);
    }
    int i = 0;
    int j = n-1;
vl ans ;
int cnt =0;
    while(i<j){
        if(s.front()==s.back()){
            if(s.front()=='0'){
                ans.push_back(j+1);
                s.pop_front();
                s.push_back('0');
                j++;
                i++;
            }
            else if(s[i]=='1'){
                ans.push_back(i+1);
                s.pop_back();
                s.push_front('1');
                j++;
                j++;
            }

        }
        else{
            s.pop_back();
            s.pop_front();
            i++;j--;
        }
    }

    cout<<ans.size()<<"\n";
    for(auto x:ans){
        cout<<x<<" ";
    }
cout<<"\n";

    
  

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
