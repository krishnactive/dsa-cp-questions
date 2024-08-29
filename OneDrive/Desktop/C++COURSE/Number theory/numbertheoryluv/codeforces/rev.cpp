#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rem(i, n) for (ll i = n - 1; i >= 0; i--)
#define ll long long
#define vl vector<ll>
#define pi pair<ll, ll>
#define f first
#define s second
#define pb push_back
#define m 1000000007
#define mi 1000001
// #define vli(n) vector<ll> v;for (ll i = 0; i < n; i++){ ll a; cin >> a;v.pb(a);}
// #define vl2i(r, c)  vector<vector<ll>> v;  for (ll i = 0; i < r; i++){ vector<ll> temp;for (ll j = 0; j < c; j++){ll a;cin >> a; temp.pb(a);}v.pb(temp);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll q;
  cin >> q;
  while(q--)
  {
    ll n;
    cin>>n;
    ll sum=n;
    while(n)
    {
        n/=2;
        sum+=n;
    }
    cout<<sum<<endl;
  }
  
}