#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int MOD = 1e9 + 7;

vector<uint64_t> getDivisors(uint64_t k) {
    vector<uint64_t> divisors;
    for (uint64_t i = 1; i * i <= k; ++i) {
        if (k % i == 0) {
            divisors.push_back(i);
            if (i != k / i) {
                divisors.push_back(k / i);
            }
        }
    }
    return divisors;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        uint64_t k;
        cin >> x >> y >> z >> k;

        vector<uint64_t> divisors = getDivisors(k);
        int max_positions = 0;

        for (uint64_t a : divisors) {
            if (a > x) continue;
            for (uint64_t b : divisors) {
                if (b > y || k / a < b) continue;
                uint64_t c = k / (a * b);
                if (c <= z && a * b * c == k) {
                    max_positions += (x - a + 1) * (y - b + 1) * (z - c + 1);
                    max_positions %= MOD;
                }
            }
        }
        cout << max_positions << endl;
    }
}

int main() {
    solve();
    return 0;
}
