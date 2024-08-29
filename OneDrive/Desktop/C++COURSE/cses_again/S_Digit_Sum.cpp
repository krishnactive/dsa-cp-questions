#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// dp[pos][sum_mod][tight] - number of valid numbers formed from the current position,
// having the current sum modulo D, and tight indicates if we are still bound by the digits of K
int dp[10005][105][2];

int digit_dp(const string &K, int D, int pos, int sum_mod, int tight) {
    // Base case: If we have processed all digits
    if (pos == K.size()) {
        return sum_mod == 0 ? 1 : 0;
    }

    // Check if the result is already computed
    if (dp[pos][sum_mod][tight] != -1) {
        return dp[pos][sum_mod][tight];
    }

    int limit = tight ? K[pos] - '0' : 9;
    int result = 0;

    for (int digit = 0; digit <= limit; ++digit) {
        result = (result + digit_dp(K, D, pos + 1, (sum_mod + digit) % D, tight && (digit == limit))) % MOD;
    }

    return dp[pos][sum_mod][tight] = result;
}

int count_valid_numbers(string K, int D) {
    memset(dp, -1, sizeof(dp));
    return digit_dp(K, D, 0, 0, 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string K;
    int D;
    cin >> K >> D;
    cout << count_valid_numbers(K, D)-1 << "\n";

    return 0;
}
