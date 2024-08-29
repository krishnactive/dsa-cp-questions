#include <iostream>
#include <cstdio>
using namespace std;
/*
int max_of_four(int m,int n,int o,int p){
    //return m>n&&m>o&&m>>p?m:(n>o&&n>p?n:(o>p?o:p));   
    if(m>n&&m>o&&m>>p) return m;
    else if(n>o&&n>p)   return n;
    else if(o>p)    return o;
    else if (p>m)return p;
}


//Add `int max_of_four(int a, int b, int c, int d)` here.


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
*/
//approach 2
int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{   int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(max(a,b),max(c,d));
    return 0;
}