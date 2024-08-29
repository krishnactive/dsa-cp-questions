// #include<bits/stdc++.h>
// using namespace std;
// stack<int> intake(stack<int>s,int n){
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         s.push(x);
//     }
//     return s;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         stack<int>s1;
//         stack<int>s2;
//         stack<int>s3;
//         // for(int i=0;i<n;i++){
//         //     int x ;
//         //     cin>>x;
//         //     s1.push(x);
//         // }
//         // for(int i=0;i<n;i++){
//         //     int x ;
//         //     cin>>x;
//         //     s2.push(x);
//         // }
//         // for(int i=0;i<n;i++){
//         //     int x ;
//         //     cin>>x;
//         //     s3.push(x);
//         // }
//         intake(s1,n);
//         intake(s2,n);
//         intake(s3,n);
//         int sum=0;
//         int toadd=0;
//         while(!s1.empty() && !s2.empty() && !s3.empty()){
//             if(sum>=x){
//                 break;
//             }
//             toadd=min(min(s1.top(),s2.top()),s3.top());
//             sum|=toadd;
//             if(s1.top()==toadd){
//                 s1.pop();
//             }
//             else if(s2.top()==toadd){
//                 s2.pop();
//             }
//             else{
//                 s3.pop();
//             }
            
//         }
//         if(sum>=x){
//             cout<<"yes"<<'\n';
//         }
//         else{
//             cout<<"no"<<'\n';
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
// vector<int> intake(vector<int>s,int n){
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         s.push_back(x);
//     }
//     return s;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a,b,c;
        // intake(a,n);
        // intake(b,n);
        // intake(c,n);
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            b.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            c.push_back(x);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if((a[i]&x)+(a[i]^x)==x)
                sum|=a[i];
            else break;
        }
        for(int i=0;i<n;i++){
            if((b[i]&x)+(b[i]^x)==x)
                sum|=b[i];
            else break;
        }
        for(int i=0;i<n;i++){
            if((c[i]&x)+(c[i]^x)==x)
                sum|=c[i];
            else break;
        }
        if(sum==x){
            cout<<"yes"<<'\n';
        }
        else{
            cout<<"no"<<'\n';
        }
    }
    return 0;
}
