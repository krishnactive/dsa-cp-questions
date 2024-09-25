#include <bits/stdc++.h>

 using namespace std;



 int main() {



vector<int>v1{0,1,3,2,12,9};
vector<int>v2{21,6,9,8,21, 99, 1,13,16,1,0,73};
cout<<(v1.size()-v2.size());
if((int)(v1.size()-v2.size())>5)
cout<<"LARGE"<<endl;
else
cout<<"SMALL"<<endl;


return 0;}