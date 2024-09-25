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
# define minA(v) *min_element(v)
# define maxA(v) *max_element(v)
# define st(v) sort(v.begin(),v.end())
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true; // If no divisors found, num is prime
}

int findNextPrime(int n) {
    if(isPrime(n)) return n;
    n++; 
    while (true) {
        if (isPrime(n)) {
            return n; 
        }
        n++;
    }
}



int solve(){
    
    int d;cin>>d;
    int fprime=findNextPrime(1+d);
    int sprime=findNextPrime(1+d+d);
    return fprime*sprime;
}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    in{

	cout<<solve()<<"\n";



}
return 0;
}
//This is krishna.


    
    

