#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>m){
    cout<<"Size: "<<m.size()<<endl;
    for(auto &pr:m){
    cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    //1.inbuild implementation
    //2.Time complexity
    //3.valid Keys datatype
    unordered_map<int,string>m;
    m[1]="abc";//0(1) for insertion and access
    m[5]="cdc";
    m[3]="acd";
    m[6]="a";
    //m[5]="cde";
    print(m);//maps use tree 
    //unordered use hash table to print thats whay we are getting uneven outputs
    auto it=m.find(3);
    if(it!=m.end())
        m.erase(it);//keys are removed and some garbage keys are displayed 😒🤣
    //m.clear();//keys are deleted//no in case of iterator 
    if(it==m.end()){
        cout<<"No value";
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    print(m);

}