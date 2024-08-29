// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k,x,i=k,sum=0,c=1;
//         cin>>n>>k>>x;
//         vector<int>v;
//         for(int i=k;i>=1;--i){
//             if(i!=x){
//             if(sum>=n){
//                 break;
//             }
//             if(((i&n)+(i^n))==n){
//                 sum+=i;
//                 v.push_back(i);
//             }
//             if(x!=1&&i==1){
//                 c=c+1;
//             }
//             if(((c&n)+(c^n))==n&&sum<n){
//                 sum+=c;
//                 for(int f=1;f<=c;f++)
//                 v.push_back(f);
//             }
//             //i++;
//             if(i==1){
//                 i=k;
//             }
//             }
//     }
//       if(sum>=n){
//             cout<<"YES\n";
//             cout<<v.size()<<'\n';
//             for(auto &x:v){
//                 cout<<x<<' ';
//             }
//             cout<<'\n';
//         }
//         else{
//             cout<<"NO\n";
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x,sum=0,ss=0;
        vector<int>v;
        cin>>n>>k>>x;
        if(k!=x){
            for(int i=k;i>=1;i--){
                if((n/i)!=x&&i!=x){
                    sum+=i*(n/i);
                    for(int d=1;d<=n/i,sum==n;d++){
                        v.push_back(i);
                        if(sum==n){
                            break;
                        }
                    }
                }
                if(sum>=n){
                    break;
                }
                //n=n%i;
            }
        }
        else{
            for(int i=k-1;i>=1;i--){
                if((n/i)!=x&&i!=x){
                    sum+=i*(n/i);
                    for(int d=1;d<=n/i||sum==n;d++){
                        v.push_back(i);
                        ss+=i;
                        // if(ss==n||sum==n){
                        //     break;
                        // }
                        //n=n-i*(n/i);
                    }
                   // n=n-i*(n/i);
                    if(sum>=n){
                    break;
                }
                }
                
            }
        }
        if(sum>=n){
             cout<<"YES\n";
            cout<<v.size()<<'\n';
            for(auto &x:v){
                cout<<x<<' ';
        }
        cout<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }

    }
    return 0;
    
    }