#include <bits/stdc++.h>
using namespace std;
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

void solve() {
    int n,m;
    cin>>n>>m;
    int cn =0;
    char a[n][m];
    bool pass =false;
    int to=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]!='.') cn++;
                
        }
        to+=cn; 
        if(cn%2!=0&&cn!=0)pass = true;
        cn=0;
    }
    if(to==0){
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        } 
        cout<<"\n";
    }
    return;
    }
    if(pass){
        cout<<"-1\n";
        return;
    }
    cn = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][i]!='.') cn++;
        }
        if(cn%2!=0&&cn!=0){
                cout<<"-1\n";
                return;
        } 
        cn=0;
    }
    
    for(int i=0;i<n;i++){
        int tt=0;
        for(int j=0;j<m;j++){
            if(a[i][j]=='U'){
                if(tt==0){
                    a[i][j]='B';
                    a[i+1][j]='W';
                    tt=1;
                }
                else if(tt==1){
                    a[i][j]='W';
                    a[i+1][j]='B';
                    tt=0;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        int tt=0;
        for(int j=0;j<n;j++){
            if(a[j][i]=='L'){
                if(tt==0){
                    a[j][i]='B';
                    a[j][i+1]='W';
                    tt=1;
                }
                else if(tt==1){
                    a[j][i]='W';
                    a[j][i+1]='B';
                    tt=0;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }


    

}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.


