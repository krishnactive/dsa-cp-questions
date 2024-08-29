#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // Calculate the number of operations using the logarithmic formula
        int operations = ceil(log(n) / log(k));
        
        cout << operations << endl;
    }

    return 0;
}
