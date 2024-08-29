#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>b;
    cin>>n;
    for(int i= 0;i < n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            int h;
            cin>>h;
            if(h==1){
                count++;
            }
        }
        b.push_back(count);
    }
    int sum=0;
    for(auto &x:b){
        if(x>1){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}