#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int l=v.size();
        // if(l==1){
        //     cout<<0<<'\n';
        // }
        // else if(l==2){
        //     cout<<abs(v[0]-v[1]);
        // }
        // else if(l==3){
        //     cout<<
        // }
    int sum=0;
    for(int i=0,j=l-1;i<l/2;i++,j--){
        sum+=abs(v[i]-v[j]);

    }
    cout<<sum<<endl;
    }
    return 0;
}
