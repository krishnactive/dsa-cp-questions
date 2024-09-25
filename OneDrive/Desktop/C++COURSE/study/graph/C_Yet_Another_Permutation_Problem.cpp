#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
bool isPrime(int num) {
    if(num<=3) return true;
    if(num%2==0 || num%3==0) return false;
    for(int i=5;i*i<=num;i+=6){
        if(num%i==0 ||num%(i+2)==0){
            return false;
        }
    }
    return true;
}

bool ischeck(int num) {
    int cf=0;
    for(int i=1; i<=sqrt(num);++i) {
        if (num%i==0) {
            if(i*i==num) {
                cf+=1;
            }
            else{
                cf+=2;
            }
        }
    }

    return cf==3;
}


int main(){
    in{
int n;
cin>>n;
vector<int>ans,ans2,prime;
//ans.pb(1);
cout<<"1 ";
//bool pass=true;
for(int i=2;i<=n;i++){
    //pass=true;
   if(isPrime(i)||(i&1)==1){
    //ans.pb(i);
    cout<<i<<" ";
    int ii=i;
    while(ii*2<=n){
        if(ii*2<=n){
    //ans.pb(ii*2);
    cout<<ii*2<<" ";
    ii*=2;}
    }
    //pass=false;
   }
//    else if(i%2!=0){
//     ans.pb(i);
//    }
 
//    else if(!ischeck(i)){
//     ans.pb(i);
//    }
}
//
// for(int i=3;i<=n;i++){
//     int count=0;
//     for(auto x:ans){
//         if(x!=i){
//             count++;
//         }
//     }
//     if(count==ans.size()) ans2.pb(i);
// }

// for(auto c:ans){
//     cout<<c<<" ";
// }
// for(auto c:ans2){
//     cout<<c<<" ";
// }
cout<<"\n";

}
return 0;
}
//This is krishna.