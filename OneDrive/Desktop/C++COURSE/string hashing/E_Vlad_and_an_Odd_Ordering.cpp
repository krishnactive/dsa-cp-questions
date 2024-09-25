#include <iostream>
#include <cmath>
using namespace std;

int findKthCard(int n, int k) {
    int p = 1;
    while (2 * p <= k) {
        p *= 2;
    }
    int oddPosition = ceil((double)k / p);
    return (2 * oddPosition - 1) * p;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << findKthCard(n, k) << endl;
    }

    return 0;
}
