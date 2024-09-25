#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define ump unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
bool isprime(int num) {
    if(num<=3){
        return true;
    }

    if(num%2==0||num%3==0) {
        return false;
    }

    for(int i=5;i*i<=num;i+=6) {
        if (num%i==0||num%(i+2)==0){
            return false;
        }
    }
    return true;
}

int div(int num) {
    if(num<=3){
        return 1;
    }

    if(num%2==0) {
        return 2;
    }
    if(num%3==0) {
        return 3;
    }

    for(int i=5;i*i<=num;i+=6) {
        if(num%i==0){
            return i;
        }
        if(num%(i+2)==0){
            return i+2;
        }

    }
    return 1;
}


void solve(){
    int a , b;
    cin>>a>>b;



    if(b<=3||((a==b)&&(isprime(a)))){
        cout<<"-1\n";
    }

    else if(a==b){
        ll d=div(a);
        
        cout<<d<<" "<< a-d<<"\n";
    }
    else if((b&1)==0){
        cout<<"2 "<<b-2<<"\n";
    }
    else{
        cout<<"2 "<<b-1-2<<"\n";
    }


}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    in{

	solve();



}
return 0;
}
//This is krishna.


