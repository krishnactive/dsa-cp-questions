#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;


void dfs(int i, int j, int initialpos,int d,vector<vector<char>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    // invalid things ko return or eleminate is best process
    if(i<0 || j<0) return;
    if(i>=n || j >= m) return;
    if(grid[i][j]!=initialpos) return ;
    grid[i][j] = d;
    //matrix wala question ma for loop kyu upar niche jana hai to individually char dfs chala lo go it
     dfs(i-1,j, initialpos, 0, grid);  // this can go out of boundary so appy if condition on these
     dfs(i+1,j, initialpos, 0, grid);
     dfs(i , j-1, initialpos, 0, grid);
     dfs(i , j+1, initialpos, 0, grid);

    
}

// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//     int initialColor = image[sr][sc];
//     if(initialColor!=color)
//         dfs(sr,sc,initialColor,color,image );
//     return image;
// }

int numIslands(vector<vector<char>>& grid) {
    int ans = 0;
    for(int i= 0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
    int initialpos = grid[0][i];
    if(initialpos!='0'){
        ans++;
        dfs(0,0,initialpos,0,grid);
    }
    }        
    }
}




int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < 9; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(3);
}