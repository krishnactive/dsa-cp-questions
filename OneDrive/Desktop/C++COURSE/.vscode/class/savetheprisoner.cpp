#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'saveThePrisoner' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 *  3. INTEGER s
 */

int saveThePrisoner(int n, int m, int s) {
vector<long long>g;

for (long long i=s,j=1;j<=m;i++,j++){
    if(i>n){
        i=i-n;
    }
    g.push_back(i);   
}


return g.back(); 

}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m,s;
        cin>>n>>m>>s;
        cout<<saveThePrisoner(n,m,s)<<endl;
        
    }
    return 0;
}