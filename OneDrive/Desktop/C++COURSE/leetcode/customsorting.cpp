#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
    // First, compare the first elements in increasing order
    if (a.first != b.first) {
        return a.first < b.first;
    }
    // If the first elements are the same, compare the second elements in decreasing order
    return a.second > b.second;
}

int main() {
    vector<pair<int, int>> damgtime = {{3, 4}, {1, 2}, {3, 2}, {2, 5}, {1, 3}};
    
    // Sort using the custom comparator
    sort(damgtime.begin(), damgtime.end(), customComparator);

    // Output the sorted vector
    for (const auto& p : damgtime) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
