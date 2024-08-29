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
        int nn;
        cin>>nn;
        vector<int>a;
        vector<int>b;
        vector<int>cc;
        //int s;
        for(int i=0;i<nn;i++){
            int n; 
            string c;
            cin>>n;
            cin>>c;
            int m=0,n=0,o=0,p=0;
            if(c=="01"){
                //a.push_back(n);
                if(m>=n){
                    m=n;
                }
            }
            else if(c=="01"){
                b.push_back(n);
            }
            else if(c=="11"){
                cc.push_back(n);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(cc.begin(),cc.end());
        int aa=a[0];
        int bb=b[0];
        int ccc=cc[0];
        // int o=*min_element(a.begin(),a.end())+*min_element(a.begin(),a.end());    
    }
    return 0;
}