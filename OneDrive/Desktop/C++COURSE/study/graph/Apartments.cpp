#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 2e5;
 
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n , m,k;
int a[MAX_N] , b[MAX_N];
    cin>>n>>m>>k;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    for(int i = 0;i < m;i++){
        int x;
        cin>>x;
        b[i] = x;
    }
    sort(a,a+n);
    sort(b,b+m);

    int i = 0;
    int j = 0;
    int ans = 0;
    while(i<n&&j<n){
        if(abs(a[i]-b[j])<=k){
            ans++;
            i++;
            j++;
        }
        else{
            if(a[i]-b[j]>k){
                j++;
            }
            else{
                i++;
            }
        }
    }
    cout << ans;
    return 0;
}