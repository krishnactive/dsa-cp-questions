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



void solve(){
ll n,m,k;
cin>>n>>m>>k;
vl a(n) , b(m);
ll sum_a=0;
ll sum_b=0;
fi(n){
    cin>>a[i];
    sum_a+=a[i];
}
fi(m){
    cin>>b[i];
    sum_b+=b[i];
}
st(a);
st(b);
if(a[0]<b[m-1]){
    sum_a-=a[0];
    sum_a+=b[m-1];
    swap(a[0],b[m-1]);
}
k--;
st(a);
st(b);
if(k!=0){
    if(k%2!=0){
        if(b[0]<a[n-1]){
            sum_a-=a[n-1];
            sum_a+=b[0];
        }
    }
}
cout<<sum_a<<"\n";
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


