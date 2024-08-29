#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[3]="efee";
    m[1]="dbbd";
    m[6]="fvdffbd";
    m.insert({-2,"sweet"});
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}