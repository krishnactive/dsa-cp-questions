#include<bits/stdc++.h>
using namespace std;

double eps = 1e-7;
//till  eps(1e-n) ,five(n-1) decimal places value of hi lo will be same

double multiply(double mid, int n){
    double ans = 1;
    for(int i = 0; i < n; ++i){
        ans*=mid;
    }
    return ans;
}
 
int main(){
    double x;
    int n;
    cin >> x >> n;
    double lo = 1, hi = x, mid;
    while(hi - lo > eps){
        mid = (hi+lo)/2;
        if(multiply(mid, n)<x){
            lo = mid;
        }else{
            hi = mid;
        }
    //    n++;
    }
    //log(N*(10^d)) sqrt
    //plog(N*(10^d))
    //print decimal value till 9 decimal places
    cout << setprecision(10) << lo << "\n" << hi << endl;
    cout<< pow(x, 1.0/n) << endl;
//cout<<n;

}