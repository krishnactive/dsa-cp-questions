/*#include<iostream>
#include<math.h>
using namespace std;*/
/*int main(){
    int n,a,r,x,y,sum=0;
    cin>>n;
    cin>>a;
    cin>>r;
    x=1;
    for(int i=1;i<=n;i++)
    {  
        
        //x=x*r;
        //cout<<i<<endl;
        //sum=sum+i;
        //i=i+2;
    
    }
    cout<<sum;
    return 0;   
}*/
/*int sum(int a)
{
    int sum=0;
    sum=
}*/
/*int main()
{
    int a,r,n,sum=0;
    cin>>a;
    cin>>r;
    cin>>n;
    for(int i=0;i<n;i++)
    { for(int j=0;j<i;j++)
            {
                r=r*r;
            }
        sum=sum+a*r;
    }
    cout<<sum;
    return 0;
}*/



#include<iostream>
using namespace std;
int main()
{
    float r,n,x,y,a;
    cin>>r;
    cin>>n;
    cin>>a;
    x=1;
    y=a;
    if(n==0){
        cout<<0;
    }
    else {for(int i=1;i<n;i++)
    { 
        x=x*r;
        a+=y*x;
    }
     cout<<a;
    }
   
    return 0;

}