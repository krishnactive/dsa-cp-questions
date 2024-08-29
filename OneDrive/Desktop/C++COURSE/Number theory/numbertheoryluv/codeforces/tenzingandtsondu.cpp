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



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         vector<int>ts;
//         vector<int>te;
//         for(int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             ts.push_back(x);
//         }
//         for(int i=0;i<m;i++){
//             int y;
//             cin>>y;
//             te.push_back(y);
//         }
//         int countn=n,countm=m;
//         // sort(ts.begin(),ts.end());
//         // sort(te.begin(),te.end());
//         int j=0,i=0;
//        //while(countn!=0||countm!=0){
//         for(i,j;i<n,j<m;){
//                 if(te[j]<ts[i]){
//                     countm--;
//                     ts[i]=ts[i]-te[j];
//                     j++;
//                 }
//                 else if(te[j]>ts[i]){
//                     countn--;
//                     te[j]=te[j]-ts[i];
//                     i++;
//                     break;
//                 }
//                 else if(te[i]==ts[j]){
//                     countn--;
//                     countm--;
//                     j++;
//                     i++;
//                     break;
//                 }
//                 if(countm==0||countn==0){
//                    break; 
//                 }
                
//             }
           
        
//         // if(countm==0||countn==0){
//         //            break; 
//         //         }
//         // }
// countm--;

//         if(countm<countn){
//             cout<<"Tsondu"<<'\n';
//         }


//         else if(countn<countm){
//             cout<<"Tenzing"<<'\n';
//         }

//         else{
//             cout<<"Draw"<<'\n';
//         }
        
// }
//         return 0;
//     }