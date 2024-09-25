#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int countGroups(int n, vector<int>& numbers) {
    unordered_set<int> bitmasks;

    for (int num : numbers) {
        int bitmask = 0;
        for (int i = 0; i < 31; ++i) {
            if (num & (1 << i)) {
                bitmask |= (1 << i);
            }
        }
        bitmasks.insert(bitmask);
    }

    return bitmasks.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);

        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }

        cout << countGroups(n, numbers) << endl;
    }

    return 0;
}
