#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k=0;
        vector<int>v;
        map<int,int>s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x=0;
            cin>>x;
            v.push_back(x);
            if(x==0){
                s[k]++;
            }
            else{
                k++;
            }
        }
        cout<<(--s.end())->second<<endl;
    }
    return 0;
}