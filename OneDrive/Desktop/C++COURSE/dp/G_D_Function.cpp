#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute the count of valid numbers in the range
int count_valid_numbers(int l, int r, uint64_t k) {
    uint64_t lower_bound = pow(10, l);
    uint64_t upper_bound = pow(10, r);
    uint64_t count = 0;

    for (uint64_t n = lower_bound; n < upper_bound; ++n) {
        if ((k * n) % 9 == (k * (n % 9)) % 9) {
            ++count;
            if (count >= MOD) {
                count -= MOD;
            }
        }
    }
    return count % MOD;
}

void solve() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int l, r;
        uint64_t k;
        cin >> l >> r >> k;

        int result = count_valid_numbers(l, r, k);
        results[i] = result;
    }
    
    for (int result : results) {
        cout << result << endl;
    }
}

int main() {
    solve();
    return 0;
}
