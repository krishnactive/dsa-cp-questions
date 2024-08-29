#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float array[100],sum=0.0,average;
    cout<<"Enter number of inputs ";
    cin>>n;
    for(int i=0;i<n;++i){
        cout<< i+1 <<". Enter number- ";
        cin>>array[i];
        sum=sum+array[i];
        cout<<endl;
    }
    average=sum/n;
    cout<<"average= "<<average;
    return 0;


}