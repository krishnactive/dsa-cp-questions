#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define st(v) sort(v.begin(),v.end())
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)

bool check(int x, int y, int z){
    return (ll)x*y>z;
}



auto solve(){
    int n, D;
    cin >> n >> D;
    vi v(n);
    fin{
        cin>>v[i];
    }
    st(v);
    int ans=0;
    int died=0;
    for(int i=n-1;i>=0;i--){
        int low = 1, high = n;
        bool pass=false;
    while(high>=low){
        int mid = high-(high-low)/2;
        if(check(v[i],mid,D)){
            died=mid;
            high=mid-1;
            pass=true;
        }
        else{
            low=mid+1;
        }
    }
    if(pass) ans++;
    n-=died;
    if(n<=0){
        return ans;
    }
    }
    return ans;

}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    //in{

	cout<<solve()<<"\n";



//}
return 0;
}
//This is krishna.


