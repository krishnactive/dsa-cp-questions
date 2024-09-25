#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> g[N];
int depth[N];

void dfs(int v , int par = 0){
    for(int c:g[v]){
        if(c==par) continue;
        depth[c] = depth[v]+1;
        dfs(c,v);
    }
}

int main(){
    int n ;
    cin >> n;
    for(int i =0;i<n-1;i++){
        int x , y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);

    int diameter = 0;
    int temp = -1;
    int maxdepthv ;
    for(int i = 1;i<=n;i++){
        if(temp<depth[i]){
            temp = depth[i];
            maxdepthv = i;
        }
    }
    depth[maxdepthv] = 0;//kyu ke iska ek size hai to reset nahi ho ga baki jasa
    dfs(maxdepthv); //jis
    temp = -1;
    for(int i = 1;i<=n;i++){
        if(temp<depth[i]){
            temp = depth[i];
        }
    }
    cout<<temp<<"\n";
}