#include <bits/stdc++.h>
using namespace std;
const long double MOD = 1000000007;
#define  int long double


// Function to calculate modular exponentiation (a^b % MOD)
int power(long double a, long double b) {
    long double result = 1;
    a %= MOD;

    while (b > 0) {
        if (b & 1)
            result = (result * a) % MOD;
        
        a = (a * a) % MOD;
        b >>= 1;
    }

    return result;
}

// Recursive function to calculate the probability
long double calculateProbability(int runsNeeded, int ballsLeft, int wicketsLeft, int runsScored) {
    if (runsNeeded <= 0) {
        return 1; // Base case: Runs needed is reached or exceeded
    }

    if (ballsLeft <= 0 || wicketsLeft <= 0) {
        return 0; // Base case: No balls left or no wickets left
    }

    long double probability = 0;

    // Recursively calculate probabilities for different scenarios
    probability = (probability + calculateProbability(runsNeeded - runsScored, ballsLeft - 1, wicketsLeft, runsScored)) % MOD;

    for (int i = 1; i <= 6; ++i) {
        if (i != runsScored) {
            probability = (probability + calculateProbability(runsNeeded - runsScored, ballsLeft - 1, wicketsLeft - 1, i)) % MOD;
        }
    }

    return probability;
}

signed main() {
    int T;
    cin >> T;

    while (T--) {
        int N, b, w, x;
        cin >> N >> b >> w >> x;

        int remainingRunsNeeded = N - x;

        long double prob = calculateProbability(remainingRunsNeeded, b, 10 - w, 0);

        // Calculate the modular inverse of denominator q
        long double denominatorInverse = power(prob, MOD - 2);

        // Calculate final result (numerator * denominatorInverse) % MOD
        long double result = (prob * denominatorInverse) % MOD;

        cout << result << endl;
    }

    return 0;
}
