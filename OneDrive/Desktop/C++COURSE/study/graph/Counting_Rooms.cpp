#include<iostream>
using namespace std;
#include<vector> 


void dfs(int i , int j , vector<vector<char>>&a){
    int n = a.size();
    int m = a[0].size();
    if(i>=n||j>=m) return;
    if(i<0||j<0)return;
    if(a[i][j]!='.') return;
    a[i][j]='#';
    dfs(i-1,j,a);
    dfs(i+1,j,a);
    dfs(i,j-1,a);
    dfs(i,j+1,a);
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
            if(a[i][j]=='.'){
                ans++;
                dfs(i ,j , a);
            }
        }
    }
    cout<<ans;
}