#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char p[20];
    cout<<"Enter a string ";
    cin.getline(p,20);
   // cin.ignore();
    cout<<"length"<<strlen(p)<<endl;
    return 0;
}