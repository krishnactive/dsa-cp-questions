//Awwawa! Dis cold yis ratten buy Pikachu!
#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define mod 998244353
template<typename T> bool chkmin(T &a, T b){return (b < a) ? a = b, 1 : 0;}
template<typename T> bool chkmax(T &a, T b){return (b > a) ? a = b, 1 : 0;}
ll ksm(ll a, ll b) {if (b == 0) return 1; ll ns = ksm(a, b >> 1); ns = ns * ns % mod; if (b & 1) ns = ns * a % mod; return ns;}
using namespace std;
const int maxn = 10005;
char s[maxn], t[maxn];
bool mode_chk(vi a, vi modes) {
	int n = a.size();
	for (int i = 0; i < n; i++) {
		int sum = 0, flag = 0;
		for (int j = i; j >= 0; j--) {
			if (a[j] == modes[i]) sum += 1;
			else sum -= 1;
			if (sum >= 0) flag = 1;
		}
		sum = 0;
		for (int j = i; j < n; j++) {
			if (a[j] == modes[i]) sum += 1;
			else sum -= 1;
			if (sum >= 0) flag = 1;
		}
		if (!flag) return 0;
	}
	return 1;
}
int brute(vi a, vi modes) {
	int n = a.size();
	int ans = 1e9;
	for (int j = 0; j < (1 << n); j++) {
		vi cur;
		int diffs = 0;
		for (int u = 0; u < n; u++)
			if (j & (1 << u)) cur.pb(1);
			else cur.pb(0);
		if (mode_chk(cur, modes)) {
			for (int u = 0; u < n; u++)
				if (cur[u] != a[u]) diffs += 1;
			chkmin(ans, diffs);
		}
	}
	return ans;
}
int done[maxn][maxn];
int flip[maxn][maxn]; 
int work(vi modes, vi t) {
	int n = modes.size();
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (t[i] == 1) cnt += 1;
		else cnt -= 1;
	if (cnt < 0) 
		for (int i = 0; i < n; i++)
			modes[i] ^= 1, 
			t[i] ^= 1;
	for (int l = 0; l < n; l++) {
		for (int r = 0; r <= n; r++) {
			int lst = 0;
			if (r == 0) {
				flip[l][r] = (t[l] == 1 ? -1 : 1);
				if (l > 0) flip[l][r] += flip[l - 1][r];
				chkmax(flip[l][r], 0);
			}
			else {
				if (t[l] == 0) flip[l][r] = 1 + (l > 0 ? flip[l - 1][r] : 0);
				else flip[l][r] = 1 + (l > 0 ? flip[l - 1][r - 1] : 0);
			}
		}
	}
	// cout << "!!" << flip[0][0] << ' ' << flip[1][0] << ' ' << flip[1][1] << ' ' << t[0] << ' ' << t[1] << endl;
	for (int i = n; i >= 0; i--) {
		for (int j = 0; j <= n; j++) {
			if (i == n) done[i][j] = 0;
			else {
				if (t[i] == 0)
					done[i][j] = done[i + 1][min(n, j + 1)];
				else {
					if (modes[i] == 1 || j > 0)
						done[i][j] = min(done[i + 1][max(j - 1, 0)], done[i + 1][min(n, j + 1)] + 1);
					else {
						done[i][j] = 1e9;
						int sum = 0;
						for (int r = i; r < n; r++) {
							sum += (t[r] == 0 ? 1 : -1);
							int needflip = 0;
							if (sum < 0) needflip = (1 - sum) / 2;
							int ending = min(r - i + 1, flip[r][needflip]);
							chkmin(done[i][j], done[r + 1][ending] + needflip);
							// if (i == 0) {
							// 	cout << "! " << r << ' ' << ending << ' ' << needflip << ' ' << done[r + 1][ending] << endl;
							// }
						}
					}
				}
			}
			// cout << i << ' ' << j << ' ' << done[i][j] << endl;
		}
	}
	// cout << done[0][0] << endl;
	return done[0][0];
}
int greedy(vi s, vi t) {
	// s : modes
	int n = s.size();
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (s[i]) continue;
		int flag = 0, sum = 0;
		for (int j = i; j >= 0; j--) {
			sum += (t[j] == 0 ? 1 : -1);
			if (sum >= 0) flag = 1;
		}
		int lst = 0;
		sum = 0;
		for (int j = i; j < n; j++) {
			sum += (t[j] == 0 ? 1 : -1);
			if (sum >= 0) flag = 1;
			if (sum >= -2) lst = j;
		}
		if (flag) continue;
		while (t[lst] == 0) lst -= 1;
		t[lst] = 0; ans += 1;
	}
	return ans;
}
vi int_to_vi(int x, int n) {
	vi ans;
	for (int i = 0; i < n; i++) {
		if (x & (1 << i)) ans.pb(1);
		else ans.pb(0);
	}
	return ans;
}
int vi_to_int(vi a) {
	int ans = 0;
	for (int i = 0; i < a.size(); i++)
		if (a[i]) ans += (1 << i);
	return ans;
}
void otp(vi a) {
	for (auto x : a)
		cout << x << ' ';
	cout << '\n';
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); 
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cin >> (s + 1);
		cin >> (t + 1);
		vi a, b;
		for (int i = 1; i <= n; i++)
			a.pb(s[i] - '0'), b.pb(t[i] - '0');
		int ans = work(a, b);
		cout << ans << '\n';
	}
    return 0;
}