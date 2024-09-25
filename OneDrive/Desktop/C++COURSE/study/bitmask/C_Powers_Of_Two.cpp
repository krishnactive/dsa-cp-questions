#include<bits/stdc++.h>
using namespace std;
# define ll long long 

int main(){
    ll n,k;
    cin>>n>>k;
  
    int c1= __builtin_popcount(n);
    if(k>=c1&&k<=n){
        vector<ll>a;
        map<int,int>b;
        queue<int>c;
        for(int i= 0;i<64;i++){
            if((n>>i)&1){

                a.push_back(1<<i);
                if(i!=0)
                c.push(1<<i);
                b[1<<i]++;
            }
        }
        int rq = k-c1;
        cout<<"YES\n";
        if(rq == 0){
            for(auto x:a)cout<<x<<" ";
        }
        else{
            int nn = a.size();
            while(nn!=k){
                int temp = c.front();
                c.pop();
                b[temp]--;
                b[temp/2]+=2;
                if(temp/2>1){
                    c.push(temp/2);
                    c.push(temp/2);
                }
                nn++;

            }
            // cout<<b.size();

            for(auto x:b){
                for(int i= 0; i<x.second; i++){

                    cout<<x.first<<" ";
                }
            }
        }
      
    }
    else{
        cout<<"NO";
    }
}