#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int mmin(vector<int> z){
   int x=z[0];
    for(auto &xx:z){
        if(xx<=x){
            x=xx;
        }
    }
    return x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        vector<int>a10{2000000000};
        vector<int>a01{2000000000};
        vector<int>a11{2000000000};
        while(n--){
            int f;
            string s;
            cin>>f>>s;
            if(s=="10"){
               a10.push_back(f); 
            }
            else if(s=="01"){
               a01.push_back(f); 
            }
            else if(s=="11"){
               a11.push_back(f); 
            }
        }
        int min=2000000000;
        int min10=mmin(a10);
        int min01=mmin(a01);
        int min11=mmin(a11);
        if(min10!=2000000000){
        if(min01!=2000000000){
            min=min10+min01;
        }}
        if(min11!=2000000000){
            min=(min11<=min)?min11:min;
        }
        if(min!=2000000000){
            cout<<min<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}