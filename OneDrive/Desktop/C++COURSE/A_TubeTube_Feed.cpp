#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int q;
    cin>>q;
    while (q--)
    {
        int n,t;
        cin>>n>>t;
        int b=0,xx=0;
        vector<int> v1,v2;
        //bool t=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v2.push_back(x);
        }
        multimap<int,pair<multiset<int>,int>>d;
        vector<int>ss;
        int ld=0;
        for(int i=0;i<n;i++){
            if(t<=v1[i]+i+1){
                ld++;
            }
            if(i+v1[i]==t){
                 d.insert({ v2[i],{v1[i],i+1} });
                 ss.push_back(v2[i]);
            }
        }
        if(ld==0){
            int ii=0;
            int f=*max_element(v2.begin(),v2.end());
            vector<int>maxx;
            vector<int>indexx;
            for(int i=0;i<n;i++){
                if(v2[i]==f){
                    maxx.push_back(v1[i]);
                    indexx.push_back(i);
                    break;
                }
            }
            int maxa=*max_element(maxx.begin(),maxx.end());
            for(int i=0;i<maxx.size();i++){
                if(maxx[i]==maxa){
                    ii=i;
                    break;
                }
            }
            cout<<indexx[ii]+1<<'\n';
        }
        
        
        //auto it=d.begin();
        //auto iiit=iit.second;
        else if(ss.size()>0){
            int mm=*max_element(ss.begin(),ss.end());
            //auto it=d[d.size()-1].second;
            //it.second.second;
            cout<<d[mm].second<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
           
    }
return 0;
}