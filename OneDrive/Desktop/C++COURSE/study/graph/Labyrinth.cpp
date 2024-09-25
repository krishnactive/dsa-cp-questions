#include<iostream>
using namespace std;
#include<vector>
int ans = 0;
string asn;
void dfs(int i , int j, vector<vector<char>>&v){
    int n = v.size();
    int m = v[0].size();

    if(i<0||j<0) return;
    if(i>=n||j>=m) return;
    if(v[i][j]=='#') return;

v[i][j]='a';

dfs(i-1,j,v);
asn.push_back('L');
dfs(i+1,j,v);
asn.push_back('R');
dfs(i,j-1,v);
asn.push_back('D');
dfs(i,j+1,v);
asn.push_back('U');
if(v[i][j]=='B') ans++;

}
int main(){
     int n, m;
    cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    int ans =0 ;
    for(int i=0;i<n;i++){
        for(int j= 0;j<m;j++){
            char x;
            cin>>x;
            a[i][j]=x;
        }
    }

    for(int i=0;i<n;i++){
        for(int j = 0; j<m; j++){
            if(a[i][j]=='A'){
                dfs(i ,j , a);
            }
        }
    }
cout<<asn;
}