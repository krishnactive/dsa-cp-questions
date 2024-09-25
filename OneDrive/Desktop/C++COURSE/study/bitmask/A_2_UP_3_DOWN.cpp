#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if((a<b)&&(b-a<3)) cout<<"Yes";
    else if((b<a)&&(a-b<4)) cout<<"Yes";
    else cout<<"No";
}
