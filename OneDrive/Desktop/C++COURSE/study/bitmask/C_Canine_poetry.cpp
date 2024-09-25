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
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)

int solve(){
    string s;
    cin>>s;
    ll len=s.size();
    ll ans=0;
    ll count=1;
    for(int i=0;i<len-1;i++){
        if((s[i]==s[i+1])||((s[i]!=s[i+1])&&(s[i]==s[i+2]))){
            count++;
        }
        if(((s[i]!=s[i+1])||(i==len-2))&&(count>1)){
            ans += ceil((double)count/2);
            count=1;
        }
    }

    // if(count!=0){
    //     ans+=ceil((double)count/2);
    // }

    if(ans==0&&len!=1){
        if(s[0]==s[len-1]){
            ll tt=len/2;

            for(int i=0;i<len/2;i++){
                if(s[i]!=s[len-1-i]){
                    return ans;
                }

            }
            return ans+1;
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
    in{

	cout<<solve()<<"\n";



}
return 0;
}
//This is krishna.


