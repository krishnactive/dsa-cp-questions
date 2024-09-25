#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    vector<pair<int, int>> operations;
    int max_operations = 0;

    // Iterate over possible l values
    for (int l = 1; l <= N; ++l) {
        // Find all valid r such that K <= r - l and P[l-1] > P[r-1]
        for (int r = l + K; r <= N; ++r) {
            if (P[l-1] > P[r-1]) {
                operations.push_back({l, r});
                swap(P[l-1], P[r-1]);
                max_operations++;
            }
        }
    }

    // Output the results
    cout << max_operations << endl;
    for (auto op : operations) {
        cout << op.first << " " << op.second << endl;
    }

    return 0;
}
