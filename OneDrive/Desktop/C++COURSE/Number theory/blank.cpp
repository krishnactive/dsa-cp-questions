#include<iostream>
#include<vector>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        vector<int>v;
        int x=0;
        for(int i=0;i<n;i++){
            int x=0;
            cin>>x;
            if(x==0){
                count++;
            }
            if(x!=0||i==n-1){
                v.push_back(count);
                count=0;
            }
        }
        
        int z=0;
        for(auto c:v){
            if(z<=c){
                z=c;
            }
        }
        
        cout<<z<<endl;
    }
    return 0;
}