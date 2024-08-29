#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define lld long double
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vl vector<ll>
#define ump unordered_map
#define uset unordered_set
#define mset multiset
#define minA(v) *min_element(v.begin(),v.end())
#define maxA(v) *max_element(v.begin(),v.end())
#define st(v) sort(v.begin(),v.end())
#define fin(a,n) for(int i=0;i<n;i++){ll x; cin>>x;a.pb(x);} 
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=1;i<n;i++)
#define int long long
#define min fmin
#define max fmax

using namespace std;

vector<int> remainingBalls(int n, vector<int>& d, vector<int>& s) {
    stack<int> r;
    vector<int> r_list;

    for (int i = 0; i < n; ++i) {
        if (d[i] == 1) {
            r.push(i);
        } else {
            while (!r.empty() && s[i] > s[r.top()]) {
                r.pop();
            }
            // while()
            while(!r.empty()&&s[i]==s[r.top()]){
                    r.pop();
            }
            if (r.empty()) {
                r_list.push_back(i);
            }
        }
    }

    while (!r.empty()) {
        r_list.push_back(r.top());
        r.pop();
    }

    sort(r_list.begin(), r_list.end());

    return r_list;
}

signed main() {
    int n;
    cin >> n;

    vector<int> d(n);
    vector<int> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    vector<int> result = remainingBalls(n, d, s);

    for (int b : result) {
        cout << b << " ";
    }
    cout << endl;

    return 0;
}
