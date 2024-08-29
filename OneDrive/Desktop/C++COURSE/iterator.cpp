#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    string str;
    cout<<"Enter a string ";
    getline(cin,str);
    string::iterator it;
    /*for (it=str.begin();it!=str.end();it++){
        cout<<*it;
    }*/
    for(it=str.begin();it!=str.end();it++){
        *it=*it-32;
        count++;
    }
    cout<<str<<endl<<count;
}