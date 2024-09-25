#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 510;
const int INF = 1e9+10;

ll dist[N][N];

int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin>> dist[i][j];
        }
    }
    vector<int> del(n);
    for(int i=0;i<n;i++){
        cin>>del[i];
    }
    reverse(begin(del), end(del));
vector<ll> ans;
    for(int k = 0;k<n;k++){
        int k_v = del[k];
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                ll new_dis = dist[i][k_v]+dist[k_v][j];
                dist[i][j] = min(dist[i][j], new_dis);
            }
        }
        ll sum = 0;
        for(int i = 0;i<=k;i++){
            for(int j = 0;j<=k;j++){
                sum+= dist[del[i]][del[j]];
            }
        }
        ans.push_back(sum);
    }
reverse(begin(ans), end(ans));
for(auto x:ans)cout<<x<<" ";

}