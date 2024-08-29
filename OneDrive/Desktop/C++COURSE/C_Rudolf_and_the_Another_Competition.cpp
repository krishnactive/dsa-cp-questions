#include<bits/stdc++.h>
using namespace std;
int timeone(vector<int>v11,int i){
    long long indvpen=0;
    for(int h=0;h<=i;h++){
        indvpen+=v11[h];
    }
    return indvpen;
}
int sum(vector<int>v,int l){
    int pen2=0;
    for(int j=0;j<l;j++){
        pen2+=timeone(v,j);
    }
    return pen2;
}
int sum2(vector<long long>rr,long long nn){
    long long m=nn;
    long long pent=0;
    for(int i=0;i<nn;i++){
        pent+=(long long)rr[i]*m;
        m--;
    }
    return pent;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<long long >rudolf;
        vector<vector<long long>>data;
        for(int i=0;i<n;i++){
            vector<long long>y;
            for(int j=0;j<m;j++){
                //vector<int>y;
                int x;
                cin>>x;
                if(i==0){
                    rudolf.push_back(x);}
                y.push_back(x);
            }
        sort(y.begin(),y.end());
        if(i!=0)
        data.push_back(y);
        }
  sort(rudolf.begin(),rudolf.end());      
// for(auto x:rudolf){
//     cout<<x<<'\n';
// }
//cout<<"no";
long long rura=0;
long long rut=0;
int rup=0;
for(int i=0;i<m;i++){
    if(rut+rudolf[i]>h){
        break;
    }
    else{
        rup++;
        rut+=rudolf[i];
        //rura+=rura+rudolf[i];
    }
}
//rura=sum(rudolf,rup);
rura=sum2(rudolf,rup);
//rura+=rudolf[0];
//cout<<rura<<' '<<rut<<' '<<rup<<endl;
//vector<vector<int>>rank;
// rank[0].push_back(rup);
// rank[0].push_back(rura);
int rr=1;

for(int i=0;i<n-1;i++){
    long long sum1=0;
    long long pen=0;
    long long so=0;
    vector<long long>pen1;
    for(int j=0;j<m;j++){

        if(sum1+data[i][j]>h){
            break;
        }
        else{
            so++;
            pen1.push_back(data[i][j]);
            //pen+=pen+data[i][j];
            sum1+=data[i][j];
    } 
    }
    // pen=sum(pen1,so);
    pen=sum2(pen1,so);
    //pen+=pen1[0];
    //cout<<pen<<' '<<sum1<<' '<<so<<endl;
    // if(t==4)    
    // cout<<so<<endl;
    if(rup<so){
        rr++;
    }
    else if(rup==so&&rura>pen){
        //pen.push_back(sum);
        rr++;
    }

    // if(so>rup){}
    // rank[i+1].push_back(so);
    // rank[i+1].push_back(sum);
}
//sort(pen.begin(),pen.end());
//int count=0;
// for(auto &x:pen){
//     if(rura>x){
//         rr++;
//     }
// }

cout<<rr<<'\n';
}
  return 0;      
}
        
        
