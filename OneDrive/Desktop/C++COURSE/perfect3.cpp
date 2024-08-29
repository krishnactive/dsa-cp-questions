#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;long n;
   cin>>t;
   while(t!=0)
   {
       vector<long> v ;
       cin>>n;
   long arr[n];int c=0;
   long brr[n];
   for(long i=0;i<n;i++)
   {
       cin>>arr[i]>>brr[i];
   }
   for(long i=0;i<n-1;i++)
   {
       for(long j=i;j<n;j++)
       {
           if(brr[i]+brr[j]==11)
           {
            v.push_back(arr[i]+arr[j]);
            c++;
           }
       }
   }
   if(c==0)
   cout<<-1<<endl;
   else
   {long min=v[0];
       for(int i=1;i<v.size();i++)
       {
           if(v[i]<min)
           min=v[i];
       }
       cout<<min<<endl;
   }
       t--;
   }

    return 0;
}