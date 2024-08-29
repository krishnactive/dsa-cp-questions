#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char p[20];
    char *s=p;
    int n;
    cout<<"size of string";
    cin>>n;
    cout<<"Enter a string ";
    cin.getline(s,n);
    cin.ignore();
    cout<<"length"<<strlen(p)<<endl;
    return 0;
}