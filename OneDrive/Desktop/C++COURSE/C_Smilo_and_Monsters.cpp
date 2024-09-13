#include<bits/stdc++.h>
using namespace std;
#define long long ll

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(begin(a),end(a));

        int i=0, j= n-1;
        int x = 0;
        int attacks = 0;
        while(i<j){
            if(x<a[j]&&i!=j){
                x+=a[i];
                attacks+=a[i];
                i++;
            }
            else if(x>=a[j]){
                attacks++;
                x = 0;
                j--;
            }
            else if(i==j){
                break; 
            }
        }
        int ls = a[j];
        if(x>=ls){
            attacks++;
        }
        else if(x>=(ls+1)/2){
            attacks+=1+(ls-x);
        }
        else{
            for(int i=1;i<=(ls+1)/2;i++){
                x++;
                attacks++;
                if(x>=ls-x){
                    attacks++;
                    break;
                }
            }
        }
        cout<<attacks<<"\n";
    }
}