#include<bits/stdc++.h>
using namespace std;

char ar[1001][1001];
char br[1001][1001];
bool vis[1001][1001];
int n,m;
vector<char> path;

bool isValid(int x, int y){
    if(x<1||x>n||y<1||y>m) return false;
    if(ar[x][y]=='#'|| vis[x][y]==true) return false;
    return true;
}

bool bfs(int x , int y){
    queue<pair<int,int>> q;
    q.push({x, y});
    vis[x][y] = true;

    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        if(ar[a][b]=='B'){
            while(true){
                path.push_back(br[a][b]);
                if(path.back() == 'L')b++;
                if(path.back() == 'R') b--;
                if(path.back() == 'U') a++;
                if(path.back() == 'D') a--;

                if(a==x&&b==y) break;
            }
            return true;
        }
        //left
        if(isValid(a, b-1))br[a][b-1]='L',q.push({a,b-1}), vis[a][b-1]=true;
        if(isValid(a,b+1)) br[a][b+1]='R',q.push({a,b+1}),vis[a][b+1] = true;
        if(isValid(a-1,b))br[a-1][b]='U',q.push({a-1,b}),vis[a-1][b]=true;
        if(isValid(a+1,b)) br[a+1][b] = 'D',q.push({a+1,b}), vis[a+1][b] = true;


    }
    return false;
}


int main(){
    cin>>n>>m;
    int x, y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ar[i][j];
            if(ar[i][j]=='A'){
                x=i;
                y=j;
            }
        }
    }
    
    if(bfs(x,y)==true){
        cout<<"YES"<<"\n"<<path.size()<<"\n";
        while(path.size() > 0) cout<<path.back(),path.pop_back();   
    }
    else{
        cout<<"NO\n";
    }
    
}