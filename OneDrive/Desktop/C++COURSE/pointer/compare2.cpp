#include<iostream>
using namespace std;
int compare()
{
    int a[3],b[3],s1=0,s2=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
        if(a[i]>b[i])
            s1++;
        else if(a[i]<b[i])
            s2++;
    }
    cout<<s1<<" "<<s2;
    return 0;

}
int main()
{
    return compare();
}