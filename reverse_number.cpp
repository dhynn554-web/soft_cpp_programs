#include <iostream>
using namespace std;

int main() {
    long long n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    // Trace n = 4271: digit 1 -> rev 1; digit 7 -> 17; digit 2 -> 172; digit 4 -> 1724
    while (n > 0) {
        int digit = n % 10;     // last digit
        rev = rev * 10 + digit;
        n /= 10;                // remove last digit
    }
    cout << "Reversed: " << rev << "\n";
    return 0;
}
