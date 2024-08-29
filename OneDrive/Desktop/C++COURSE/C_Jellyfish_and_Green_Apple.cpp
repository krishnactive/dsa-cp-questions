#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define ump unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fi(n) for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
bool check(ll m){
    int ct=0;
    for(int i=0;i<64;i++){
        if(((m>i)&1)) ct++;
        if(ct>1) return false;
    }
    return true;
}


void solve(){
ll n, m;
cin>>n>>m;
ll cut=0;
ll i= 0;
if(n!=1){
    ll rem= n%m;
    while(n%m!=0){
        cut+=n%m;
        n=n%m;
        n*=2;
        if(i>1e3){
            cout<<"-1\n";
            return;
        }
        i++;
    }
    cout<<cut<<"\n";
    return;
}
else{
    if(m==1){
        cout<<"0\n";
        return;
    }
    else{
        ll ans=n;
        ll two=2;
        while(two!=m){
            ans+=two;
            two*=2;
            
            
            if(ans>1e3){
                cout<<"-1\n";
                return ;
            }
        }
        cout<<ans<<"\n";
        return;
    }
}

}


int main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    in{

	solve();



}
return 0;
}
//This is krishna.
