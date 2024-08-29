#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n ,m ;
        cin>>n;
        cin>>m;
        vector<int>ts;
        vector<int>te;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ts.push_back(x);
        }
        for(int j=0;j<m;j++){
            int xx;
            cin>>xx;
            te.push_back(xx);
        }
        int nn=n;
        int mm=m;
        int i=0,j=0;
        while(true){
                if(ts[i]>te[j]){
                    ts[i]=ts[i]-te[j];
                    mm--;
                    j++;
                }
                else if(te[j]>ts[i]){
                    te[j]=te[j]-ts[i];
                    nn--;
                    i++;
                }
                else {
                    nn--;
                    mm--;
                    i++;
                    j++;
                }
                if(i==n||j==m){
                    break;
                }
            
        }
        if(mm<nn){
            cout<<"Tsondu"<<endl;
        }
        else if(nn<mm){
            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}
