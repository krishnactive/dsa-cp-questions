#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> a(n),b(n);

    auto vec = [&](vector<int>& v){
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
    };
    vec(a);
    vec(b);
    int k = 0;
    int ans = 0;
    map<int,bool> fre;
    for(int i=0;i<n;i++){
        if(!fre[a[i]]){
            for(int j=k;j<n;j++){
                if(a[i]==b[j]){
                    k=j+1;
                    ans++;
                    break;
                }
                else{
                    fre[b[j]]=1;
                }
            }
            if(k>=n)break;
        }
    }
    cout<<n-ans<<"\n";

}