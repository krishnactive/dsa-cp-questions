#include<bits/stdc++.h>
using namespace std;
string ss="((())(())";
bool check(string s)
{
    int ch=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            ch++;
        }
        else{
            ch--;
        }
        if(ch<0) return false;
    }
    if(ch==0) return true;
    return false;
}



void recursion( string s, int n){
    if(s.size()==2*n){
        if(check(s))
        cout<<s<<endl;
        return ;
    }
    string open =s+'(';
    string closed  = s+')';
    recursion(open, n);
    recursion(closed,n);
}
int main(){
    
    int n;
    cin>>n;
    string s;
    recursion(s,n);
    return 0;
}