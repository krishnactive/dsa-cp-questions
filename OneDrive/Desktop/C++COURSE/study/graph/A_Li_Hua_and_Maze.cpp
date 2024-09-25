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
    int n,m;
    cin>>n>>m;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int ans =0;
    int tt=n;
    n=m;
    m=tt;
    if(x1==1){
        if(y1==1||y1==m){
            cout<<"2\n";
            return;
        }
        else ans =3;
    }
    else if(y1==1){
        if(x1==n){
            cout<<"2\n";
            return; 
        }
        else ans =3;
    }
    else if(x1==n){
        // if(y1==1){
        //     cout<<"2\n";
        // }
         ans =3;
    }
    else if(y1==m){
        ans = 3;
    }




    if(x2==1){
        if(y2==1||y2==m){
            cout<<"2\n";
            return;
        }
        else ans =3;
    }
    else if(y2==1){
        if(x2==n){
            cout<<"2\n";
            return;
        }
        else ans =3;
    }
    else if(x2==n){
         ans =3;
    }
    else if(y2==m){
        ans = 3;
    }
    if(ans==0){
        cout<<"4\n";
    }
    else cout<<"3\n";
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


