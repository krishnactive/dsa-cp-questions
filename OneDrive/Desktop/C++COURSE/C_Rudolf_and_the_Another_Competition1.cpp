#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<int>xx;
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                xx.push_back(x);
            }
            v.push_back(xx);
        }
        vector<int>rank;
        vector<int>pos;
int rr=0,rp=0;
        int sumru=0;
        for(int j=0;j<n;j++){
            int i=0;
            int sum=0;
            sort(v[j].begin(),v[j].end());
        for(i;i<m;){
            if(sum>h){
                // if(v[j][i]+sum>h){
                
                break;}
            // }
            else {
                sum+=v[j][i];
            }
            i++;
        }
        if(j==0){
            rr=i+1;
            rp=sum*(-1);
        }
        sum=sum*(-1);
        rank.push_back(i+1);
        pos.push_back(sum);
        }
        map<int,multiset<int>>sss;
        for(int i=0;i<rank.size();i++){
            sss.insert(make_pair(rank[i], multiset<int>{pos[i]}));
        }
        vector<int >pe;
        vector<int >raa;

        // for(auto dd:sss){
        //     raa.push_back(dd.first);
        // }
        // for(auto dd1:raa){
        //     pe.push_back(sss[dd1]);
        // }
        int tt=1;
        for(auto xp:sss){
            int xc;
            for(auto xd:xp.second){
                xc=xd;
                if(xd==rp){
                    break;
                }           
            }
        if(xp.first==rr&&xc==rp){
            cout<<tt<<'\n';
            break;
        }
            tt++;   
        }
    }
    return 0;
}