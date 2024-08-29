#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>even;
        vector<int>odd;
        int e=0,o=0;
        while(n--){
            int x;
            cin>>x;
            if(x%2==0){
                e++;
                even.push_back(x);
            }
            else{
                odd.push_back(x);
                o++;
            }
        }
        if(e==0||o==0){
            cout<<"YES"<<'\n';
        }
        else{
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            if(even[0]>odd[0]){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
    }
    return 0;
}