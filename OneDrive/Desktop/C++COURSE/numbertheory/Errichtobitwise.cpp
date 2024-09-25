#include<bits/stdc++.h>
using namespace std;
void printBinary(int x){
    for(int i = 30;i >= 0 ;i--){
        cout<<((x>>i)&1);
    }
    cout<<endl;
}
int main(){
    int n;
    cin>> n;
    vector<int> masks(n,0);
    for(int i = 0; i<n ; ++i){
        int num_worker;
        cin >> num_worker;
        int mask = 0;
        for(int j = 0; j < num_worker; ++j){
            int day;
            cin >> day;
            mask = (mask | (1<<day));//to set day bit 1 ko days time shift kiya aur mask se or kiya
        }
        masks[i]=mask;
    }
//    for(int i = 0; i < n;i++){
//     cout<< masks[i]<<"\n";
//     printBinary(masks[i]);
//    }
int max_days = 0;
int person1=-1;
int person2=-1;
for(int i = 0; i< n; ++i){
    for(int j = i+1; j< n; ++j){
        int intersection = (masks[i] & masks[j]);//o(1)
       
        int common_days = __builtin_popcount(intersection);//count set bit o(1)
        //max_days = max(max_days, common_days);
         if(common_days > max_days){
            max_days = common_days;
            person1 = i;
            person2 = j;
         }
        //cout<< i <<" "<<j<<" "<< common_days<<endl;
    }
}
cout<< person1<<" "<< person2<<" "<< max_days<<endl;
 //cout<<max_days<<endl;  

    // for(int i= 0; i<n; ++i){
    //     for( int j = i=1; j<n ;i++){

    //     }
    //}
    return 0;
}

//