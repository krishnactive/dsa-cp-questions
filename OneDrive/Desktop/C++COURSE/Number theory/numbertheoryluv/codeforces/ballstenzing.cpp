#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>=0;j--){
                if(v[i]==v[j]){
                ans+=j-i+1;
                //--i;
                i=j+1;
            }
            }
        }
        cout<<ans-1<<endl;
    }
    
    return 0;
    }