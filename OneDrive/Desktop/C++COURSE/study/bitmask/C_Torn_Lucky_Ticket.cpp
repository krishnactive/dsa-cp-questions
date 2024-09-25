#include <bits/stdc++.h>
using namespace std;

int digitSum(const string s) {
    int sum = 0;
    for (char digit : s) {
        sum += digit - '0';
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> tickets(n);

    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    unordered_map<int, int> prefixSums;
    unordered_map<int, int> suffixSums;
    int totalLuckyPairs = 0;

    for (int i = 0; i < n; i++) {
        int prefix = 0;
        int suffix = 0;
        int len = tickets[i].length();

        for (int j = 0; j < len; j++) {
            prefix += tickets[i][j] - '0';
            suffix += tickets[i][len - 1 - j] - '0';

            if (j % 2 == 1) {
                if (prefix == suffix) {
                    totalLuckyPairs++;
                }
            }

            prefixSums[prefix]++;
            suffixSums[suffix]++;
        }
    }

    // Count the lucky pairs
    for (int i = 1; i <= 9; i++) {
        totalLuckyPairs += prefixSums[i] * suffixSums[i];
    }

    cout << totalLuckyPairs << endl;

    return 0;
}
