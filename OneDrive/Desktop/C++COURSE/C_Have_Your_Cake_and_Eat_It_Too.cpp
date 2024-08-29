#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;cin>>t;
    auto solve = [&]{
        int n;cin>>n;
        vector<int> a(n),b(n),c(n);
        long long tot = 0;
        auto fin =[&](vector<int>&a){
            for(int i=0;i<n;i++){cin>>a[i];}
        };
        
        fin(a);
        fin(b);
        fin(c);
        tot = accumulate(a.begin(),a.end(),0ll);
        tot = (tot+2)/3;
    
    auto check = [&](vector<int> a,vector<int>b,vector<int>c)->vector<int>{
        int tot1 = 0;
        int p = 0;
        int p2=0,p3=0,p4=0,p5=0;
        for(int i =0;i<n;i++){
            if(p==0){
                tot1+=a[i];
                if(tot1>=tot){
                    p=1;
                    p2 = i+1;
                    p3 = p2+1;
                    tot1=0;
                }
            }
            else if(p==1){
                tot1+=b[i];
                if(tot1>=tot){
                    p=2;
                    p4=i+1;
                    p5=p4+1;
                    tot1 = 0;
                }
            }
            else if(p==2){
                tot1 += c[i];
            }
        }
        if(p==2&&tot1>=tot){
            return {1,p2,p3,p4,p5,n};
        }
        else return {0};
    };

    vector<int> ans = check(a,b,c);
    if(ans.size()>1){
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[4]<<" "<<ans[5]<<"\n";
        return;
    }
    ans = check(a,c,b);
    if(ans.size()>1){
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[4]<<" "<<ans[5]<<" "<<ans[2]<<" "<<ans[3]<<"\n";
        return;
    }
    ans = check(b,a,c);
    if(ans.size()>1){
        cout<<ans[2]<<" "<<ans[3]<<" "<<ans[0]<<" "<<ans[1]<<" "<<ans[4]<<" "<<ans[5]<<"\n";
       
        return;
    }
    ans = check(b,c,a);
    if(ans.size()>1){
        cout<<ans[4]<<" "<<ans[5]<<" "<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<"\n";
        return;
    }
    ans = check(c,a,b);
    if(ans.size()>1){
        cout<<ans[2]<<" "<<ans[3]<<" "<<ans[4]<<" "<<ans[5]<<" "<<ans[0]<<" "<<ans[1]<<"\n";
    
        return;
    }
    ans = check(c,b,a);
    if(ans.size()>1){
       cout<<ans[4]<<" "<<ans[5]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[0]<<" "<<ans[1]<<"\n";
        return;
    }

cout<<"-1\n";
return;
    };
    while(t--){
        solve();
    }
}