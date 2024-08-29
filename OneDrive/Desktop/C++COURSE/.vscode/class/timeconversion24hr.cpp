#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=(s[0]-'0')*10+(s[1]-'0');
    if(s[8]=='P'&&n>=1&&n<12){
        n=n+12;
        s[0]=n/10+'0';
        s[1]=n%10+'0';
        s.erase(8,2);
        cout<<s;
    }
    else if(s[8]=='A'&&n>=12){
        n=n-12;
        s[0]=n/10+'0';
        s[1]=n%10+'0';
        s.erase(8,2);
        cout<<s;
    }
    else{
        s.erase(8,2);
        cout<<s;
    }
    return 0;

}

