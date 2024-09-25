#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int decimal = -5;
    int bits = 5;

    int twos_complement = (1 << bits) + decimal;

    cout << "Decimal: " << decimal << endl;
    cout << "Two's Complement (" << bits << " bits): " << bitset<5>(twos_complement) << endl;

    int converted_decimal = twos_complement - (1 << bits);

    cout << "Converted Decimal: " << converted_decimal << endl;

    return 0;
}
