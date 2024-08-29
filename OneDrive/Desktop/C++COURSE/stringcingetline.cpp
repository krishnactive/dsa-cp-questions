#include<iostream>
using namespace std;
int main(){
    char s[200];
    char s2[200];
    cout<<"Enter your name ";
    cin.getline(s,200);
    cout<<"welcome "<<s<<endl;

    cout<<"Enter your name again ";
    cin.getline(s2,200);
    cout<<"welcome "<<s2<<endl;
    if(s==s2){
        cout<<"matched";
    }
    else if(s!=s2){
         cout<<"not matched";
    }

}
//find problem 