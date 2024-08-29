#include<iostream>
using namespace std;
int main()
{
    int r,n,x;
    cin>>r;
    cin>>n;
    x=1;
    if(r==0&&n==0){
        cout<<"not defined";
    }

    else if(n==0){
        cout<<1;
    }
    /*else if(r<0){for(int i=1;i<=n;i++)
    { 
        x=x*r;
    }
    float 
    }*/
    else {for(int i=1;i<=n;i++)
    { 
        x=x*r;
    }
     cout<<x;
    }
   
    return 0;

}