#include <iostream>

using namespace std;

int query(int x, int y) {
    cout << "? " << x << " " << y << endl;
    cout.flush();
    int d;
    cin >> d;
    return d;
}

void solve() {
    int n, m;
    cin >> n >> m;

    // Querying distances from the corners
    int d11 = query(1, 1); // Distance from top-left corner
    int d1m = query(1, m); // Distance from top-right corner
    int dnm = query(n, m); // Distance from bottom-right corner
    int dn1 = query(n, 1); // Distance from bottom-left corner

    int x, y; // Coordinates of the mine

    // Determining which diagonal contains the mines
    if ((d11 + dnm) == (d1m + dn1)) {
        // Mines are on the main diagonal (top-left to bottom-right)
        x = (d11 < dnm) ? 1 : n;
        y = (d11 < dnm) ? 1 : m;
    } else {
        // Mines are on the other diagonal (top-right to bottom-left)
        x = (d1m < dn1) ? 1 : n;
        y = (d1m < dn1) ? m : 1;
    }

    // Querying the final position to confirm
    int d = query(x, y);
    cout << "! " << x << " " << y << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
