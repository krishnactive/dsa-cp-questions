#include <iostream>
#include <vector>

std::vector<int> generate_permutation(int N, int K) {
    std::vector<int> P(N, 0);

    // Place the odd-indexed elements in the odd positions
    for (int i = 1; i < N; i += 2) {
        P[i] = i + 1;
    }

    // Fill in the remaining elements
    int odd_sum = 1;
    for (int i = 1; i < (N + 1) / 2; i++) {
        odd_sum += i;
    }
    int odd_count = K;
    if (odd_count > odd_sum) {
        odd_count = odd_sum;
    }
    for (int i = 2; i < N; i += 2) {
        if (odd_count > 0) {
            P[i] = 1 + (i / 2);
            odd_count--;
        } else {
            P[i] = N - (i / 2);
        }
    }

    return P;
}

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, K;
        std::cin >> N >> K;
        std::vector<int> P = generate_permutation(N, K);
        for (int i = 0; i < N; i++) {
            std::cout << P[i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}