#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<pair<int,int>>&v)
{
    cout<<"size: "<<v.size()<<endl;
for (int i=0 ;i<v.size();i++)
{
    cout<<v[i].first<<"  "<<v[i].second<<endl;
}
cout<<endl;
}
int main(){
        int n;
        cin>>n;
        vector<pair<int,int>>v;//={{1,2},{2,3},{0,5}};
        for (int i=0 ;i<n;i++)
{
    int x,y;
    cin>>x >> y;
    v.push_back({x,y}) ;
}
        printvec(v);
}
