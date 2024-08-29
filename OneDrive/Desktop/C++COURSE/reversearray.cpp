#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#define max 1000  //not required for MAX_PATH OR USE A[1000]
using namespace std;


/*int main() {
    int n,a[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    // Enter your code here. Read input from STDIN. Print output to STDOUT //   
    return 0;
}*/


int main() {
    int n,a[max]; // a[MAX_PATH]
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
