#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int max_zeros = 0, curr_zeros = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                curr_zeros++;
            } else {
                max_zeros = max(max_zeros, curr_zeros);
                curr_zeros = 0;
            }
        }
        max_zeros = max(max_zeros, curr_zeros);
        cout << max_zeros << endl;
    }
    return 0;
}
