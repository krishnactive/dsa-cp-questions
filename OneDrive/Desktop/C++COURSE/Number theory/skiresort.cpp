#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<long long>vac;
        long long n=0, k=0, q=0,d=0,sc=0;
        cin>>n>>k>>q;
        for(int i=0;i<n;i++){
            int x=0;
            cin>>x;
            if(x<=q){
                d++;
                sc++;
            }
            else{
                vac.push_back(d);
                d=0;
            }
        }
        int sm=0;
        for(auto &xx:vac){
            sm+=xx;
        }
        if(sm!=sc){
            vac.push_back(d);
        }
long long max=*max_element(vac.begin(),vac.end());
long long ways=0;
for(long long i=k;i<=max;i++){
for(long long j=0;j<vac.size();j++){
if(vac[j]>=i){
    ways+=(long long)vac[j]-(i-1);
}
}
}
cout<<ways<<endl;
}
return 0;
}




























