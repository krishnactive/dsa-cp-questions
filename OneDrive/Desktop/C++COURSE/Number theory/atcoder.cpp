#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,a;
  cin>>n>>m>>a;
  if((long long) (a*a)%n==0&&(long long) (a*a)%m!=0){
    cout<<(long long)((n*m)/(a*a))/2+n/a;
  }
  else if((long long) (a*a)%n!=0&&(long long) (a*a)%m==0){
    cout<<(long long)((n*m)/(a*a))/2+m/a;}
  else if((long long) (a*a)%n!=0&&(long long) (a*a)%m!=0){
    cout<<(long long)((n*m)/(a*a))/2+n/a+m/a+1;}
  else{
  cout<<(long long)(n*m)/(a*a);}

  //cout<<a/5+ (a%5)/4+ ((a%5)%4)/3+ (((a%5)%4)%3)/2+ (((a%5)%4)%3)%2;
  
  return 0;
}