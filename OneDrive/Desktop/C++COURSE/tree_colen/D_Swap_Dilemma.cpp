#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    auto solve = [&]{
        int n;cin>>n;
        vector<int>a(n) , b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int p1 =0, p2= 0;
        for(int i=0;i<n;i++){
            if(!(p1)&&i+1<n&&a[i]==b[i+1]&&a[i+1]==b[i]){
                p1++;
                i++;
            }
            else if(a[i]!=b[i]){
                p2++;
            }
        }
        if(p1&&p2||(p2==0&&p1==0)){
            sort(begin(a),end(a));
            sort(begin(b),end(b));
            if(a==b){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";

    };


    while(t--){
        solve();
    }
}