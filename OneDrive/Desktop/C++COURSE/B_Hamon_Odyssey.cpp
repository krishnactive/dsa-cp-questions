#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.push_back(x);
        }
        int tr=0;
        int r=s[0];
        //bool f=true;
        int si=s.size();
        vector<int>no;
        int tt=s[0];
        for(int i=1;i<n;i++){
            tt&=s[i];
            if(tt==0){
                tr++;
                tt=s[i+1];
                // if(i+1==s.size()){
                //     break;
                // }
            }
        }
        cout<<tr<<'\n';
        // int sii=s.size();
    //     while(true){
           
    //         int oo=0;
    //         for(int i=1;i<si;i++){
    //             r&=s[i];
    //             tr++;
    //             if(r!=0){
    //                 no.push_back(r);
    //             }
    //             else{
    //                 oo++;
    //             }
    //         }
    //         sii=sii-oo;
    //         r=no[0];
    //         si=no.size();
    //         if(no.size()==0||si==sii){
    //             //f=false;
    //             break;
    //         }
    //     }
    //         cout<<tr<<'\n';
    }
    return 0;
}