#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;

    vector<int> a(n);
    
    long long all = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        all+=a[i];
    }
    vector<int > ans;
    vector<int> cy = a;
    sort(begin(cy),end(cy));
    for(int i = 0;i<n;i++){
        long long ex = all - a[i];
        if(cy[n-1]==a[i]){
            if(ex-cy[n-2]==cy[n-2]){
                ans.push_back(i+1);
            }
        }
        else{
            if(ex-cy[n-1]==cy[n-1]){
                ans.push_back(i+1);
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto& x:ans)cout<<x<<" ";

}