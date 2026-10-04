#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    int count = 0;
    if (n == 0) count = 1;
    while (n > 0) {
        n /= 10;      // n / 10 removes the last digit
        count++;
    }
    cout << "Digits: " << count << "\n";
    return 0;
}
