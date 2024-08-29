#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"Enter a string to check palindrome";
    getline(cin,str1);
    string str=str1;
    for(int i=0; str[i]!='\0';i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
    }
//cout<<str<<endl<<str1<<endl;
string rev="";

int len=(int)str.length();

rev.resize(len);

for(int i=0,j=len-1;i<len;i++,j--){
    rev[i]=str[j];
}
rev[len]='\0';
if(str.compare(rev)==0){
    cout<<str1<<" is palindrome";
}
else if(str.compare(rev)!=0){
    cout<<str1<<" is not palindrome";
}
return 0;
}