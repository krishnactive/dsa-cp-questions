/*#include <iostream>
#include <string>

int main() {
    int n = 5; // number of rows (adjust as needed)
    int i = 0; // loop counter

    // Loop for each row
    while (i < n * 2 - 1) {
        int spaces = abs(n - 1 - i);
        int stars = n * 2 - 1 - 2 * spaces;

        std::cout << std::string(spaces, ' ') << std::string(stars, '*') << std::endl;

        i++;
    }

    return 0;
}
*/
#include <iostream>
#include <cmath>

int main() {
    int n = 5; // size of the diamond (can be adjusted as needed)
    
    for (int i = -n + 1; i < n; i++) {
        for (int j = -n + 1; j < n; j++) {
            // Print spaces for the upper half of the diamond
            if (std::abs(i) + std::abs(j) < n) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}
