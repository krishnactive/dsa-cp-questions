#include<iostream>
using namespace std;
int main(){
    char s[200];
    char s2[200];
    cout<<"Enter your name ";
    cin.get(s,200);
    cout<<"welcome "<<s<<endl;
    cin.ignore();

    cout<<"Enter your name again ";
    cin.get(s2,200);
    cout<<"welcome "<<s2<<endl;
}