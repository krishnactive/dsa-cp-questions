#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double n,d ,h;
        cin>>n>>d>>h;
        vector<double>v;
        for(int i=0;i<n;i++){
            double x;
            cin>>x;
            v.push_back(x);
        }
        double area= n*(d*h)/2;
        //cout <<area;
        for(int i=0;i<n-1;i++){
            if(v[i]+h>v[i+1]){
                double hh=h-(abs(v[i]-v[i+1]));
                double bb=(double) d*hh/h;
                area-=(double) hh*bb/2;
            }
        }
        //printf("%6f\n",area);
        cout<<fixed<<setprecision(7)<<area<<'\n';
    }
    return 0;
}