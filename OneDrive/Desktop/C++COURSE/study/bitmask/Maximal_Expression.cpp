#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        long long N, K;
        std::cin >> N >> K;

        if (K == 1) {
            std::cout << 0 << std::endl;
        } else {
            long long half_K = (K + 1) / 2;
            long long max_x = (N % K) >= half_K ? N - (N % K) + half_K : N - (N % K);
            std::cout << max_x << std::endl;
        }
    }

    return 0;
}
