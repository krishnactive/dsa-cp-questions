#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    map<pair<int,int>,int> fre;
    for(int i=0;i<m;i++){
        int cnt = 0;
        for(int j = 0;j<n;j++){
            if(a[j][i]=='*')cnt++;
            else if(a[j][i]=='o'){
                fre[{j,i}] = cnt;
                cnt=0;
            }
            else if(j==n-1){
                fre[{j,i}] = cnt;
            }
        }
        for(int i = 0;i<m;i++){
            int to = n-1;
            for(int j = n-1;i>=0;i--){
                if(fre[{j,i}]){
                    a[j][i]='*';
                }
                else{
                    if(a[j][i]=='o'){
                        to = j;
                    }
                    while(fre[to+1][j])
                }
            }
            while(fre[{i,n-1}]){
                fre[{i,n-1}]--;
                a[i][to] = '*';
                to--;
            }
        }
    }
    
    

}