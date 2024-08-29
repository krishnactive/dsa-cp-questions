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
    vi alp(26, 0);
    vector<char> ans(26,'-');
    vi che;
    string s;
    cin>>s;
    int l = s.size();
    int cq=0;
    int ii=0;
    if(l<26) cout<<"-1\n";
    else{
        fi(l){
            if(l-i>=26){
                int k = 0;
                ii = i;
                for(int j = i ;j<26+i;j++){
                    if(alp[s[j]-'A']==1){
                        i = j;
                        alp.clear();
                        alp.resize(26,0);
                        // che.clear();
                        ans.clear();
                        ans.resize(26,'-');
                        cq=0;
                        break ; 
                    }
                    else{
                       
                        if(s[j]!='?'){
                            alp[s[j]-'A']=1;
                            ans[k] = s[j];
                        }
                        else{
                            cq++;
                            // che.pb(k);
                        }
                            
                    }
                    k++;
                }
                bool pass = false;
                fi(26){
                    if(alp[i]==1){
                    pass  = true;
                    }
                    else{
                        che.pb(i);
                    }
                }

        if((cq==26)){
            for(int i = 0;i<l;i++){
                if(i==ii){
                    cout<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                    i=ii+26;
                }
                else{
                    cout<<s[i];
                }
            }
        }
        else if(pass){
            
            for(int k = 0; k < l; k++){
                int j = 0;
                if(k == ii){
                    fi(26){
                if(ans[i]!='-'){
                    cout<<ans[i];
                }
                else{
                   cout<<(char)(65+che[j]);
                    j++; 
                }
                k=ii+26;

            }
            }
                else cout<<s[k];
            }

            

            return ;
        }
        else{
            cout<<"-1\n";
            return ; 
        }

    }
            }
        }
        

// cout<< 'c'-'a';


}


int main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    //in{

	solve();



// }
return 0;
}
//This is krishna.


