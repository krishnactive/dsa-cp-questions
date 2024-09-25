#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<int> a;
    for(int i = 0;i < n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    long long sum = 0;
    int count = 0;
    int j=0 , i=0;
    for(;i<n;i++){
        sum+=a[i];
        while(sum>k&&j<=i){
            sum-=a[j];
            j++;
        }
        if(sum==k){
            count++;
        }
    }
    cout<<count<<"\n";
}
