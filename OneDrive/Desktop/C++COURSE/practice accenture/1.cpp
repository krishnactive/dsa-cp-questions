#include <iostream>
#include <string>

int main() {
    std::string s1 = "Ram";
    std::string s2 = "Ram";
    std::string s3 = "Shyam";
    std::string s4 = "zzzz";

    std::cout << "Comparing strings with compare method:" << std::endl;
    std::cout << s1.compare(s2) << std::endl; // Compares "Ram" with "Ram"
    std::cout << s1.compare(s3) << std::endl; // Compares "Ram" with "Shyam"
    std::cout << s1.compare(s4) << std::endl; // Compares "Ram" with "ABC"

    return 0;
}
