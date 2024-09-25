#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    return (n/100)*((n%100)/10);
}
        
int main(){
    int n;
    cin >> n;
    int ss = sum(n);
    while(ss!=n%10){
        if(ss==n%10){
            break;
        }
        ++n;
        ss = sum(n);
    }
    cout<<n;
  return 0;
}