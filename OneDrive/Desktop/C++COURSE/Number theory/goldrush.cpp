#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
void is(int x){
        if(x%3==0){
            v.push_back(x/3);
            v.push_back((x/3)*2);
            if(((x/3)*2)%3==0){
                is(((x/3)*2));
            
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;
       //vector<int>v;
        if(a%3==0){
            v.push_back(a/3);
            v.push_back((a/3)*2);
        }
        if(((a/3)*2)%3==0){
            is((a/3)*2);
        }
        int count=0;
        for(auto y:v){
            if(y==b){
                cout<<"yes";
                count++;
            }
        }
        if(count!=0){
            cout<<"no";
        }
    }
    return 0;
}