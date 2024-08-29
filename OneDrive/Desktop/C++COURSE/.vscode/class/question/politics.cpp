#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char,char>s;
    int x;
    cin>>x;
    int y;
    cin>>y;
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            char g;
            cin>>g;
            s.push_back(s[i][j]);
        }
    }
    return 0;
}