#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string vv;
        cin>>vv;
       // vector<char>v;
        // for(int i=0;i<n;i++){
        //     char c;
        //     cin>>c;
        //     vv.push_back(c);
        // }
        vector<int>dd;
        dd.push_back(vv[0]);
        for(int i=1;i<n;i++){
            
           if(vv[i]!=vv[i-1])
            dd.push_back(vv[i]);
        }
        // vector<char>v;
        // for(auto x:vv){
        //     v.push_back(x);
        // }
        int count=0;
        for(int i=0;i<dd.size();i++){
            for(int j=i+1;j<dd.size();j++){
                if(dd[i]==dd[j]){
                    count++;
                    //break;
                    
                }
            }
            //break;
        }
        if(count>0)
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    return 0;
}