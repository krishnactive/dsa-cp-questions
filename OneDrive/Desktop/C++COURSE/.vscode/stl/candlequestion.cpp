#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=1;
    int *ar,size;
    cin>>size;
    ar=new int [size];
    for (int i=0;i<size;i++){
        cin>>ar[i];
    }
    sort(ar,ar+size);
    for(int i=0;i<size;i++){
        if(ar[size-1]==ar[i]){
            count++;
        }
    }
    cout<<count;
return 0;  
}