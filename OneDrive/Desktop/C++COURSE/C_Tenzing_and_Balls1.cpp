// #include<bits/stdc++.h>
// #define T int t; cin>>t; while(t--)
// #define N int i=0,n; cin>>n
// #define f(i,a,n) for(int i=a;i<n;i++)
// #define ve(v) vector<int>v
// #define x(a) int a
// #define pb push_back
// using namespace std;
// int main(){
//     T{  ve(v1);
//         N;
//         f(i,0,n){
//             x(y);
//             cin>>y;
//             v1.pb(y);
//         }
//     int l=v1.size();
//     f(i,0,n){
//         for(int j=v1.size()-1;j>=0;j--){
//            if(v1[i]==v1[j]&&j-i!=0){
//                 l=(j-i+1);
//                 if(j+1!=v1.size()){
//                     i=j+1;
//                     i--;
//                 }
//                 break;
//                 // if(j+1==v1.size()){
//                 //     break;
//                 // }
//            } 
//         }
       
//     }  
//     cout<<l<<'\n';  
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0 ; i<n  ; i++){
            int x;
            cin>>x;
            v.push_back(x);
    }
    bool x=false;
    int len=v.size();
    // for(int i=0;i<v.size();i++){
    //     for(int j=v.size()-1;j>=0;j--){
    //         if(v[i]==v[j]&&(i-j)!=0){
    //             v.erase(v.begin()+i,v.begin()+i+j-i+1);
    //             i=0;
    //             j=0;
    //             //x=true;
    //             break;   
    //         }
    //         // if(x==true){
    //         //     break;
    //         // }
    //     //continue;
    //     }
    // }
    int i=0,j=v.size()-1;
    unordered_map<int,int>m;
    while(true){
            if(v[i]==v[j]&&(i-j)!=0){
                v.erase(v.begin()+i,v.begin()+i+j-i+1);
                i=0;
                j=v.size()-1;
                //x=true;
                //break;   
            }
            else{
                //m[v[i]]++;
                i++;
                j--;
            }
            if(j==0&&i==v.size()-1){
                break;
            }
            // if(x==true){
            //     break;
            // }
        //continue;
        }
    
    
    cout<<len-v.size()<<'\n';
    }
    return 0;
    }
