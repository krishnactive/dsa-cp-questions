#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int fac(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int prob(int kk,int i){
int x=fac(kk);
int y=fac(kk-i);
int z=fac(i);
int cc=(x/(y*z));
return cc;
}
int main(){
    int t1;
    cin>>t1;
    while(t1--){
     int n,t;
     cin>>n>>t;
     int x=1,sum=0;
     vector<int>ve;
     vector<int>all;
    for(int i=0;i<t;i++){
        sum+=x;
        if(sum<=n){
            ve.push_back(x);
            
            x*=2;         
        }
    }
int tt=1;
    for(int i=0;i<t;i++){
        if(tt<=n){
            all.push_back(tt);
            tt*=2;
        }
        else{
            break;
        }
    }
    int alln=all.size();
    int maxl=ve.size();
    int ways=1;
    int way1=0;
    for(int k=1;k<=maxl;k++ ){
        int count=0;
        for(int i=0;i<alln;i++){
            int sum=0;
            
            for(int j=i;j<maxl+i&&j<alln;j++){
                sum+=all[j];     
            }
            if(sum>t){
                count++;
            }
            else{
                way1++;
            }
        }
        ways+=fac(alln)/(fac(alln-k)*fac(k))-count;
    }
    
    cout<<ways<<'\n';
    // for(auto x:all){
    //     cout<<x<<'\n';
    // }
    //cout<<alln<<"       "<<maxl<<'\n';

    // for(int i=1;i<=kk;i++){
    //     for (int j = 0; j < alln; j++)
    //     {
            
    //     }
        
    // }
    // for(int i=1;i<=kk;i++){
    //     ways+=prob(kk,i);
    //     cout<<ve[i];
    // }
    // //cout<<ways<<'\n';
    }
    return 0;
}