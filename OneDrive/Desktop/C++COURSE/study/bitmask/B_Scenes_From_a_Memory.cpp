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
#define int long long
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

const int mod = 1e9+7;
const int inf = LLONG_MAX>>1;

const int MAX=100 ;


void solve(){
   bool sieve[MAX+1];
    fill(sieve , sieve+MAX+1 ,true);

    sieve[0] = sieve[1] = false;

    for(int i = 2;i*i<=MAX;i++){
        if(sieve[i]){
            for(int j= i*i;j<=MAX;j+=i){
                sieve[j]=false;
            }
        }
    }
ll n;
string a;
cin>>n;
cin>>a;
ll ans = 0;
bool pass1=false;
for(auto x:a){
    if(!sieve[x-'0']){
        ans = x-'0';
        pass1 = true;
        break;
    }
}
if(pass1){
    cout<<"1\n";
    cout<<ans<<"\n";
}
else{
    
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(!sieve[(a[i]-'0')*10+a[j]-'0']){
                    cout<<"2\n";
                    cout<<a[i]<<a[j]<<"\n";
                    return;
                }
            }
        }
    
}

}


signed main(){
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


