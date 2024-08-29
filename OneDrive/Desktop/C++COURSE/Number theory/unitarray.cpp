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
        int n=0,nv=0,pv=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int nn;
            cin>>nn;
            if(nn==1){
                pv++;
            }
            else{
                nv++;
            }
        }
        int nv11=nv;
        int pv11=pv;
int cnv=nv%2;
int crn=nv%2;
pv=pv+cnv;
nv=nv-cnv;
if(nv>pv){
    int n1=nv/2+1;
    crn=crn+n1;
    nv=nv-n1;
    pv=pv+n1;
}
// if(nv11!=0){
//     cout<<abs(nv11-nv)<<endl;
// }
// else{
//     cout<<abs(pv11-pv)<<endl; 
// }
cout<<crn<<endl;
}
return 0;
}