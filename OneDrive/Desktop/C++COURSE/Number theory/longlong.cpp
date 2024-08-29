#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n,lll=0;
        long long sum=0;
            vector<long long>v;
            int count =0;

        cin>>n;
        for(int i=0;i<n;i++){
            
            long long x;
            cin>>x;
            v.push_back(x);
            if(x<=0){
                sum+=-x;
            }
            else if(x>0){
                sum+=x;
            }}
            map<long long ,long long>a;
            //vector<long long>b;
            int i=0;
            for(auto &xx:v){
                if(xx<0){
                    a[i]++;
                }
                else if(xx>0){
                    i++;
                }
            }
            lll=a.size();
        
        cout<<sum<<' '<<lll<<endl;
        }
        
    return 0;
    }