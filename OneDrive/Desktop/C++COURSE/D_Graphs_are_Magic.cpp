#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 100005;
const int LOG = 17;

int up[MAXN][LOG];
int maxEdge[MAXN][LOG];
int depth[MAXN];


void solve() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> gp(n+1);

    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        gp[u].push_back({v, w});
        gp[v].push_back({u, w});
    }

    memset(up, 0, sizeof(up));
    memset(maxEdge, 0, sizeof(maxEdge));
    memset(depth, 0, sizeof(depth));

    function<void(int, int, int)> dfs = [&](int node, int par, int wg) {
        up[node][0] = par;
        maxEdge[node][0] = wg;
        for (int i = 1; i < LOG; i++) {
            up[node][i] = up[up[node][i - 1]][i - 1];
            maxEdge[node][i] = max(maxEdge[node][i - 1], maxEdge[up[node][i - 1]][i - 1]);
        }
        for (auto &x : gp[node]) {
            int nx = x.first;
            int w = x.second;
            if (nx != par) {
                depth[nx] = depth[node] + 1;
                dfs(nx, node, w);
            }
        }
    };

    dfs(1, 0, 0);

    auto gedge = [&](int u, int v) {
        if (depth[u] < depth[v]) swap(u, v);
        int dd = depth[u] - depth[v];
        int maxW = 0;

        for (int i = 0; i < LOG; i++) {
            if ((dd >> i) & 1) {
                maxW = max(maxW, maxEdge[u][i]);
                u = up[u][i];
            }
        }
        if (u == v) return maxW;

        for (int i = LOG - 1; i >= 0; i--) {
            if (up[u][i] != up[v][i]) {
                maxW = max({maxW, maxEdge[u][i], maxEdge[v][i]});
                u = up[u][i];
                v = up[v][i];
            }
        }

        return max({maxW, maxEdge[u][0], maxEdge[v][0]});
    };

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            ans += gedge(i, j);
            ans %= MOD;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
