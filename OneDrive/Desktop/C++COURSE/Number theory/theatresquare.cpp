#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,a;
  cin>>n>>m>>a;
  long long r=n/a,c=m/a;
  if(n/a!=0)
    r=n/a+1;
  if(m/a!=0)
    c=m/a+1;


  cout<<r*c;
  
  return 0;
}