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
ll n,p;
cin>>n>>p;
ll nn=n;
vl a,aa,b,bb;
fi(n){
    ll x;
    cin>>x;

    aa.pb(x);
}
fi(n){
    ll x;
    cin>>x;
   
    bb.pb(x);
}

ll ans = 0;
multimap<ll,ll>mp;
fi(n){
    mp.insert(make_pair(bb[i],aa[i]));
}
st(bb);
int i=0;
// ans  = p;
auto ff= mp.begin();
bool pass = true;
nn--;
ll cnt=0;
bool  flag =false;
while(nn){
    
    if(bb[i]<p){

        ans+=bb[i]*ff->second;
        nn-=ff->second;
        pass = false;
        cnt=nn;
        if(nn<=0){
            nn = -1*nn;
            ans -= bb[i]*nn;
            cnt=0;
            flag=true;
            // cout<<ans<<"\n";
            // return;

            break;
        }
        // pass = false;
    }
    else{
        cnt++;
        break;  
    }
    i++;
    ff++;
    
}
if(!pass){
     if(nn!=0&&!flag)
    cout<<(cnt)*p+ans<<"\n";
    else
    cout<<1*p+ans<<"\n";
    // cout<<ans+(n-cnt)*p<<"\n";
}
else{
    cout<<p*n<<"\n";
}
// cout<<(n-nn)*p+ans<<"\n";

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