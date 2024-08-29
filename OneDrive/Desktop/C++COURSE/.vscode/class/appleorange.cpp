#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=0,t=0,a=0,b=0,m=0,n=0,count1=0,count2=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int ap[m],og[n];
    for(int i =0;i<m;i++){
        cin>>ap[i];
        ap[i]=ap[i]+a;
        if(ap[i]>=s&&ap[i]<=t){
            count1++;
        }
    }
    for(int j=0;j<n;j++){
        cin>>og[j];
        og[j]=og[j]+b;
        if(og[j]>=s&&og[j]<=t){
            count2++;
        }
    }
    cout<<count1<<endl<<count2<<endl;
    return 0;
    
}