#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            if(j==i||j==2*n-1)
            cout<<n<<endl;
            n--;
        }
    }
    return 0;
}